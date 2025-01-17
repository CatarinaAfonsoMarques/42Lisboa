/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:47:28 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/17 18:37:21 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
c Prints a single character.											👍
s Prints a string (as defined by the common C convention).				👍
p The void * pointer argument has to be printed in hexadecimal format.	
d Prints a decimal (base 10) number.									👍
i Prints an integer in base 10.											👍
u Prints an unsigned decimal (base 10) number.							👍
x Prints a number in hexadecimal (base 16) lowercase format.			👍
X Prints a number in hexadecimal (base 16) uppercase format.			👍
% Prints a percent sign.												👍
*/

void	ft_format(char wtv, va_list resto)
{
	if (wtv == '%')
		write (1, '%', 1);
	if (wtv == 'c')
		ft_putchar(va_arg(resto, char));
	if (wtv == 'd' || wtv == 'i')
		ft_putnbr_base(va_arg(resto, long), "0123456789");
	if (wtv == 'u')
		ft_putnbr_base(va_arg(resto, unsigned int), "0123456789");
	if (wtv == 's')
		ft_putstr(va_arg(resto, char *));
	if (wtv == 'X')
		ft_putnbr_base(va_arg(resto, long), HEXAUPPER);
	if (wtv == 'x')
		ft_putnbr_base(va_arg(resto, long), HEXALOWER);
	if (wtv == 'p')
		ft_pointer(va_arg(resto, hex));// ler como hexa
}