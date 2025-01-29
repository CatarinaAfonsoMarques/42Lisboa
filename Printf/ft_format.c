/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:47:28 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/29 14:06:33 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	else if (wtv == 'c')
		count += ft_putchar(va_arg(list, int));
	else if (wtv == 'd' || wtv == 'i')
		count += ft_putnbr_base(va_arg(list, int), BASEDEC);
	else if (wtv == 'u')
		count += ft_putnbr_base(va_arg(list, unsigned int), BASEDEC);
	else if (wtv == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (wtv == 'X')
		count += ft_putnbr_base(va_arg(list, unsigned int), HEXAUPPER);
	else if (wtv == 'x')
		count += ft_putnbr_base(va_arg(list, unsigned int), HEXALOWER);
	else if (wtv == 'p')
		count += ft_pointer(va_arg(list, unsigned long), 1);
	return (count);
}
