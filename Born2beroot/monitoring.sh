#!/bin/bash
##RECOMENDAÇÕES
##Verifique os comandos antes de testar o script inteiro: copie o contendo que está entre os parenteses e cole no terminal
## exemplo: arch=$(uname -a) --> uname -a
## verifique o que acontece a cada etapa do comando, ou seja, se o comando tem PIPE ( | ) veja o comando a cada pipe
##cpuf=$(grep "physical id" /proc/cpuinfo | sort -u | wc -l) --> grep "physical id" /proc/cpuinfo --> grep "pyshical id" /proc/cpuinfo | sort -u
##--> grep "physical id" /proc/cpuinfo | sort -u | wc -l
## assim será possivel verificar todos os comandos e seus outputs e entender o que está se passando em cada um deles.

# ARCH
##esse comando vai trazer demasiadas informações do sistema, ele vai ficar igual está no subject, porém caso vc queira trazer o que se pede
## no subject, que é a ARQUITETURA e a VERSÃO DO KERNEL, podes usar: arch=$(uname -rm) sendo -m arquitetura e -r versão do kernel
arch=$(uname -a)

# CPU PHYSICAL
cpuf=$(grep "physical id" /proc/cpuinfo | wc -l)
## esse comando tem um problema, se for executado assim, caso a VM tenha mais de um core, a palavra physical id vai aparecer 2 vezes
## sugiro trocar para o comando abaixo, que garante exato mesmo output mas lidando apenas com os valores unicos do ID do processador.
#cpuf=$(grep "physical id" /proc/cpuinfo | sort -u | wc -l)

# CPU VIRTUAL
cpuv=$(grep "processor" /proc/cpuinfo | wc -l)
## a mesma coisa do cpuf aqui, mais vale colocar os valores unicos para não confundir.
#cpuv=$(grep "processor" /proc/cpuinfo | sort -u | wc -l)

# RAM
## ok
ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

# DISK
## esse aqui tem uma discução sobre conceito do que é o uso do disco e o disco disponivel.
## manter ele assim só exige justificar pq apenas os conteudos do "/dev/" estão sendo considerados e pq não o "/boot"
## comandos que podem ser uteis para verificar: lsblk
disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} {disk_t+= $2} END {printf("%d"), disk_u/disk_t*100}')

# CPU LOAD
##ok
cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
cpu_op=$(expr 100 - $cpul)
cpu_fin=$(printf "%.1f" $cpu_op)

# LAST BOOT
## assim fica igual o subject, porém existe um comando que acho melhor
#lb=$(uptime -s)
lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')

# LVM USE
##acho que ele se complica demais aqui, pode ser mais simples apenas usando
#lvm=$(lsblk | grep -q "lvm" && echo "yes" || echo "no")
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

# TCP CONNEXIONS
# ok
tcpc=$(ss -ta | grep ESTAB | wc -l)

# USER LOG
## novamente, vale a pena verificar valores unicos
#ulog=$(users | sort -u | wc -w)
ulog=$(users | wc -w)

# NETWORK
## para esse projeto é até que okay, mas caso tenha mais de uma coneção ipv4, o hostname -I irá retornar inumeros valores
## então eu evitaria. para solucionar isso usaria:
#ip=$(hostname -I | awk '{print $1}')
# no mac, adicionaria os parenteses que o subject tem, portanto
#mac=$(ip link | grep "link/ether" | awk '{print "("$2")"}')
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

# SUDO
# ok
cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall "	Architecture: $arch
	CPU physical: $cpuf
	vCPU: $cpuv
	Memory Usage: $ram_use/${ram_total}MB ($ram_percent%)
	Disk Usage: $disk_use/${disk_total} ($disk_percent%)
	CPU load: $cpu_fin%
	Last boot: $lb
	LVM use: $lvmu
	Connections TCP: $tcpc ESTABLISHED
	User log: $ulog
	Network: IP $ip ($mac)
	Sudo: $cmnd cmd"
