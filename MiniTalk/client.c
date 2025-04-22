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
// sends encoded message to server SIGUSR1 SIGUSR2

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		// convert char to bits
		while (bits)
			kill(server_id, SIGUSR1) || kill(server_id, SIGUSR2); // send each bit 0 or 1 to server
			pause(); // wait response from server before sending next bit
			i++;
		kill(server_pid, \0); // end of message send /0
	}
}