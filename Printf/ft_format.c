/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:47:28 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/20 19:58:18 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
c Prints a single character.											👍
s Prints a string (as defined by the common C convention).				👍
p The void * pointer argument has to be printed in hexadecimal format.	👍
d Prints a decimal (base 10) number.									👍
i Prints an integer in base 10.											👍
u Prints an unsigned decimal (base 10) number.							👍
x Prints a number in hexadecimal (base 16) lowercase format.			👍
X Prints a number in hexadecimal (base 16) uppercase format.			👍
% Prints a percent sign.												👍
*/

void	*ft_format(char coisa, char *resto)
{
	if (coisa == '%')
		write (1, '%', 1);
	if (coisa == 'c')
		ft_putchar(resto);
	if (coisa == 'd' || coisa == 'i' || coisa == 'u')
		ft_putnbr_base(resto, dec);
	if (coisa == 's')
		ft_putstr(resto);
	if (coisa == 'p' || coisa == 'x' || coisa == 'X')
		ft_putnbr_base(resto, hexa);
}