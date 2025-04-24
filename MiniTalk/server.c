/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:40:38 by caafonso          #+#    #+#             */
/*   Updated: 2025/04/22 19:29:32 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mini_talk.h>
//run first! wait for signal

void	_ft_sighandle()
{
	
}

int server_pid;
server_pid = getpid();

char	_to_char(int bits[8])
{
	int	i;
	int	c;
	
	i = 0;
	c = 0;
	while (i < 8)
	{
		c |= (bits[i] << i);
		i++;
	}
	return (c);
}

int main(sinal binario, mensagem)
{
	
	char	decoded[];
	
	if (not error)
	
	while (1)
		pause();
	while ( != '\0')
	{
		ft_printf("signal recieved \n");
		sigaction();
		while (i <= 8)
			//receber char bit a bit
			//reconstruir char
			//guardar para printar tudo 
			i++;
		if (8 bits)
		{
			// add char to be written
			kill(client_pid, SIGUSR1; // mandar para client
		}
	}

	ft_printf("%s", decoded);
	return (0);
}