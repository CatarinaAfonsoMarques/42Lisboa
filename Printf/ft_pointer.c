/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:25:22 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/27 15:48:32 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//escrever 0x depois ler resto do ptr e escrever como hexa

int	ft_pointer(void *ptr)
{
	int	i;

	i = 0;
	write(1, "0x", 2);
	ft_putbnr_base(&ptr[2], HEXALOWER);
	return (i);
}
