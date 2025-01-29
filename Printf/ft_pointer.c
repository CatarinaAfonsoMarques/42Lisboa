/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:25:22 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/29 14:54:51 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//escrever 0x depois ler resto do ptr e escrever como hexa
int	ft_pointer(unsigned long ptr, int flag)
{
	int	count;
	int	put;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	if (flag)
		count += write(1, "0x", 2);
	if (ptr >= 16)
		count += ft_pointer(ptr / 16, 0);
	put = ptr % 16;
	count += write(1, &"0123456789abcdef"[put], 1);
	return (count);
}

/* int main(void)
{
	unsigned long ptr = (unsigned long)&ptr;

	ft_pointer(ptr, 1);
	write(1, "\n", 1);
	ft_pointer(0, 1);
	write(1, "\n", 1);

	ft_printf("%p", (void *)-1);
	write(1, "\n", 1);
	printf("%p", (void *)-1);
}  */