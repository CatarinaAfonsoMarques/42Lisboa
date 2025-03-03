/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 20:08:23 by caafonso          #+#    #+#             */
/*   Updated: 2025/02/10 17:45:34 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//PROTOTIPAGENS
char	*get_next_line(int fd);
int		_line_len(char *str);
char	*_ft_strjoin(char *line, char *buffer);
void	_clean_buffer(char *buffer);
char	*_str_nl(char *str);

#endif