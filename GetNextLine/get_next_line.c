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

/* variadic functions: only lives during when the program is running.
allocates memory during compile, before program is executed (!= dinamic alloc)
only kinds of variables whose location is known by the compiler at compile time
stored in data segment of the programs address space (sections of object files)
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
		if (!buffer[0])
			rd = read(fd, buffer, BUFFER_SIZE);
		if (rd <= 0)
			break ;
		line = _ft_strjoin(line, buffer);
		_clean_buffer(buffer);
		if (_str_nl(line))
			break ;
	}
	if (rd < 0 && !_str_nl(line))
		return (free(line), NULL);
	if (!line)
		return (NULL);
	return (line);
}
