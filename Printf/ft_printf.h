/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:48:33 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/27 19:40:22 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <strings.h>
# include <stdarg.h>

# define HEXAUPPER "0123456789ABCDEF"
# define HEXALOWER "0123456789abcdef"
# define BASEDEC "0123456789"

//PROTOTIPAGENS
int		ft_printf(const char *format, ...);
int		ft_format(char coisa, va_list resto, int count);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr_base(long nbr, char *base);
int		ft_pointer(unsigned long ptr);

#endif