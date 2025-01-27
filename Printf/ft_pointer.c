/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:25:22 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/27 19:38:58 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//escrever 0x depois ler resto do ptr e escrever como hexa

int	ft_pointer(unsigned long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	//write(1, "0x", 2);
	count = count + 2;
	count += ft_putnbr_base(ptr, HEXALOWER);
	return (count);
}

/* int	main(void)
{
	char ptr[] = "123";
	printf(" %d ", ft_pointer(&ptr));
} */