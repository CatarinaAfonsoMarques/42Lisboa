/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:40:31 by caafonso          #+#    #+#             */
/*   Updated: 2025/04/22 19:25:59 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mini_talk.h>

int client_pid;
client_pid = getpid();

int	_to_bits(char c)
{
	int	i;
	int	bits[8];

	i = 0;
	while (i < 8)
	{
		bits[i] = (c >> i) & 1;
		i++;
	}
	return (bits);
}

void send_char(char c, int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		pause();
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 0)
	{
		i = 0;
		while (i < argc)
			send_char(argv[1], server_pid);
			kill(server_pid, \0); // end of message send /0
			i++;
	}
}