/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:35:59 by marvin            #+#    #+#             */
/*   Updated: 2025/01/17 18:29:25 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//malloc, free, write, va_start, va_arg, va_copy, va_end
/*
access variable arguments with list
if % then check format 
else write and increment
end
return nbr of char written
*/

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list list;
	int	i;
	int	count;

	va_start(list, format);
	i = 0;
	while (*format)
	{
		if (format[i] == '%')
		{
			ft_format(format[i + 1], list);
			i = i + 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
		}
	}
	va_end(list);
	return (count);
}