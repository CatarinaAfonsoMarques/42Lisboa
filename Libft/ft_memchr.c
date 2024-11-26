/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:49:42 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:47:48 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	cc;
	unsigned char	*ss;

	i = 0;
	cc = (unsigned char)c;
	ss = (unsigned char *)s;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *) &ss[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char source[10] = "hey hey";
	int c = 'y';
	char *result;
	
	size_t n = 7;

	printf("Before ft_memchr: %s\n", source);
	result = ft_memchr(source, c, n);
	printf("After ft_memchr: %s\n", result);
}
*/