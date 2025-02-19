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

int	lineLen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i]!='\n' && str[i]!='\0')
		i++;
	if(str && str[i] == '\n')
		i++;
	return (i);
}

char *func(char *line, char *buffer)
{
	char	*out;
	int	i;
	int	j;

	out = malloc(lineLen(line) + lineLen(buffer) + 1);
	if (!out)
		return NULL;
	out[lineLen(line) + lineLen(buffer)] = 0;
	i = 0;
	while (line && line[i])
	{
		out[i] = line[i];
		i++;
	}
	j = 0;
	while (buffer[j] != '\n' && buffer[j] != '\0')
	{
		out[i + j] = buffer[j];
		j++;
	}
	if (buffer[j] == '\n')
		out[i + j] = '\n';
	if (line)
		free(line);
	return (out);
}

void clean(char *buffer)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		buffer[i++] = 0;
	if (buffer[i] == '\n')
		buffer [i++] = 0;
	while (buffer[i + j])
	{
		buffer[j] = buffer[i + j];
		buffer[i + j] = '\0';
		j++;
	}
}

char *get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (1)
	{
		if (buffer[0] == '\0')
		{
			if (!read(fd, buffer, BUFFER_SIZE))
				return NULL;
		}
		line = func(line, buffer);
		clean(buffer);
		if (line[lineLen(line) - 1] == '\n' || line[lineLen(line) - 1])
			break;
	}
	if (!line)
		return (NULL);
	return (line);
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