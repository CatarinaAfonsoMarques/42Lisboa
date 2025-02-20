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

verifications: memory allocation, fd is a valid file, buffer size and
there's something to read

line = reading the line

return line and free stuff from memory
*/

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			rd;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	rd = 1;
	while (buffer[0] || rd > 0)
	{
		if (!*buffer)
			rd = read(fd, buffer, BUFFER_SIZE);
		if (rd <= 0)
			break;
/* 		if (buffer[0] == '\0')
		{
			if (!read(fd, buffer, BUFFER_SIZE) || read(fd, buffer, BUFFER_SIZE) < 0)
				return (NULL);
		} */
		line = _ft_strjoin(line, buffer);
		if (!line)
			return (NULL);
		_clean_buffer(buffer);
		// (line[_line_len(line) - 1] == '\n' || line[_line_len(line) - 1] == '\0')
		if (ft_str_nl(line))
			return (line);
	}
	if (!ft_str_nl(line) && rd < 0)
		return (free(line), NULL);
	//_clean_buffer(buffer); //tem que limpar o buffer se o read for menor que 0
	if (!line)
		return (NULL);
	return (line);
}
