/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:26:26 by caafonso          #+#    #+#             */
/*   Updated: 2025/02/12 18:40:56 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	_line_len(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\n' && str[i])
		i++;
	if (str && str[i] == '\n')
		i++;
	return (i);
}

char	*_ft_strjoin(char *line, char *buffer)
{
	char	*out;
	int		i;
	int		j;

	out = malloc(_line_len(line) + _line_len(buffer) + 1);
	if (!out)
		return (free(line), NULL);
	out[_line_len(line) + _line_len(buffer)] = '\0';
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

void	_clean_buffer(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i] && i < BUFFER_SIZE && buffer[i] != '\n')
		buffer[i++] = '\0';
	if (buffer[i] == '\n')
		buffer [i++] = '\0';
	while (buffer[i + j] && i + j < BUFFER_SIZE)
	{
		buffer[j] = buffer[i + j];
		buffer[i + j] = '\0';
		j++;
	}
}

char	*ft_str_nl(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] == '\n')
			return (&str[i]);
		i++;
	}
	return (0);
}
