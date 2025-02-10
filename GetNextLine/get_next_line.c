/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:46:36 by caafonso          #+#    #+#             */
/*   Updated: 2025/02/10 17:55:49 by caafonso         ###   ########.fr       */
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

char *get_next_line(int fd)
{
	static char	*left_c;
	char	*buff;
	char	*line;

	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || !buff) //verificações
	{
		//cenas
		free(buff);
		return (NULL);
	}
	line = fill_line_buffer(fd, left_c, buff);
	free(buff);
	if (line)
		return (line);
	return (NULL);
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