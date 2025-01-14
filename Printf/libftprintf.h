/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:48:33 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/20 19:51:55 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <strings.h>
# include <stdarg.h>

//PROTOTIPAGENS
int		ft_printf(const char *format, ...);
void	*ft_format(char coisa, char *resto);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr_base(int nbr, char *base);

#endif