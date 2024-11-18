/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:37:26 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/18 20:27:57 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	if (!dst && !src)
		return (NULL);
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	i = 0;
	if (temp_dst > temp_src )
	{
		while (len-- > 0)
			temp_dst[len] = temp_src[len];
	}
	else
	{
		while (i++ < len)
			temp_dst[i] = temp_src[i];
	}
	return (dst);
}

int main(void) 
{
	char	destino[20] = "Hello, World!";
	const char source[10] = "hey hey";
	
	size_t n = 7;

	printf("Before ft_memcpy: %s\n", destino);
	ft_memcpy(destino, source, n);
	printf("After ft_memcpy: %s\n", destino);
}