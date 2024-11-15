/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:37:26 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/15 17:45:08 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	
}

int main(void) 
{
	char destino[20] = "Hello, World!";
	const char source[10] = "hey hey";
	
	size_t n = 7;

	printf("Before ft_memcpy: %s\n", destino);
	ft_memcpy(destino, source, n);
	printf("After ft_memcpy: %s\n", destino);
}