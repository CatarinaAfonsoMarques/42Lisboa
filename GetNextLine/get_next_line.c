/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:46:36 by caafonso          #+#    #+#             */
/*   Updated: 2025/02/12 19:26:16 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* learn variadic functions: only lives during when the program is running. 
allocates memory during compile, before program is executed (!= dinamic alloc)
only kinds of variables whose location is known by the compiler at compile time
stored in data segment of the programs address space (sections of object files)

cc -Wall -Wextra -Werror -D BUFFER_SIZE=42

undefined behavior: if the file pointed to by the file descriptor changed
since the last call whereas read() didn’t reach the end of file; binary file

*/
#include "get_next_line.h"

/*
verifications: memory allocation, fd is a valid file, buffer size and
there's something to read

line = reading the line

return line and free stuff from memory
*/

char *get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char	*line;
	

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read(fd, buffer, BUFFER_SIZE);
	while (!is_new_line(buffer))
	{
		read(fd, buffer, BUFFER_SIZE);
		line = _buffering(fd, buffer);
	}


	if (!line)
		return (NULL);
	return (line);
}

char *_buffering(int fd, char *buff)
{
	int	i,

	i = 0;
	while (i != '\0' && i != '\n')
	{
		
		i++;
	}
}

/*
	buff = read(fd, buff, BUFF_SIZE); // int fildes, void *buff, size_t nbyte
	if (success)
	{
		while (len - 1)
		{
			buff[i] = '\n'; // nao na ultima
		}
		return (buff);
	}
*/