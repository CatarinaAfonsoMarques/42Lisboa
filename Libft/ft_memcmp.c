/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:49:40 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/29 19:20:38 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char s1[10] = "hey hey";
	const char s2[10] = "";
	int result;
	int result_real;
	size_t n = 7;

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	result = ft_memcmp(s1, s2, n);
	printf("result: %d\n", result);
	result_real = memcmp(s1, s2, n);
	printf("result_real: %d\n", result_real);
}
*/