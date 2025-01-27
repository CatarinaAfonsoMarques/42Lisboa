/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:47:28 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/27 16:05:18 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
c Prints a single character.	👍
s Prints a string (as defined by the common C convention).	👍
p The void * pointer argument has to be printed in hexadecimal format.	
d Prints a decimal (base 10) number.	👍
i Prints an integer in base 10.	👍
u Prints an unsigned decimal (base 10) number.	👍
x Prints a number in hexadecimal (base 16) lowercase format.	👍
X Prints a number in hexadecimal (base 16) uppercase format.	👍
% Prints a percent sign.	👍
*/

int	ft_format(char wtv, va_list list, int count)
{
	if (wtv == '%')
	{
		write (1, "%", 1);
		count++;
	}
	if (wtv == 'c')
		count = count + ft_putchar(va_arg(list, int));
	if (wtv == 'd' || wtv == 'i')
		count = count + ft_putnbr_base(va_arg(list, long), "0123456789");
	if (wtv == 'u')
		count = count + ft_putnbr_base(va_arg(list, unsigned int), "0123456789");
	if (wtv == 's')
		count = count + ft_putstr(va_arg(list, char *));
	if (wtv == 'X')
		count = count + ft_putnbr_base(va_arg(list, long), HEXAUPPER);
	if (wtv == 'x')
		count = count + ft_putnbr_base(va_arg(list, long), HEXALOWER);
	// if (wtv == 'p')
	// 	count = count + ft_pointer(va_arg(list, hex));
	return (count);
}
