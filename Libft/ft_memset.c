/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:47:44 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/29 19:07:39 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ss[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main(void) 
{
	char buffer[20] = "Hello, World!";
	size_t n = 5;

	printf("Before ft_memset: %s\n", buffer);
	ft_memset(buffer, '*', n);
	printf("After ft_memset: %s\n", buffer);
}
*/