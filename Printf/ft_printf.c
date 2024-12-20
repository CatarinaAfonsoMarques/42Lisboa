/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:35:59 by marvin            #+#    #+#             */
/*   Updated: 2024/12/20 20:15:08 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//malloc, free, write, va_start, va_arg, va_copy, va_end
/*
access variable arguments with list
if % then check format else increment
*/

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list list;

	va_start(list, format);
	while (*format)
	{
		if (format == %)
		{
			ft_format();
		}
		else
		{
			
		}
	}
	va_end(list);
	return (0);
}