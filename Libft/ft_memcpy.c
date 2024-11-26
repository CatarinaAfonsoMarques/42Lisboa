/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:47:51 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:47:58 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	i = 0;
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (dst);
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (dst);
}
/*
int main(void) 
{
	char destino[20] = "Hello, World!";
	const char source[10] = "hey hey";
	
	size_t n = 7;

	printf("Before ft_memcpy: %s\n", destino);
	ft_memcpy(destino, source, n);
	printf("After ft_memcpy: %s\n", destino);
}
*/