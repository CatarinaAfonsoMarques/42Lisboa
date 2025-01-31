/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:46:36 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/31 20:18:15 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* learn variadic functions
compile with D BUFFER_SIZE=n
*/
#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *buff;

	
	if (!fd)
		return ("NULL");
	buff = malloc( + 1);
	buff = read();
	if (success)
	{
		while (len - 1)
		{
			buff[i] = '\n'; // nao na ultima
		}

		return (buff);
	}
	free(buff);
	return (NULL);
}
