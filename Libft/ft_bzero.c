/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:47:57 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/29 19:24:41 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ss;

	ss = (char *)s;
	i = 0;
	while (i < n)
	{
		ss[i] = 0;
		i++;
	}
}
/*
int main(void) 
{
	char buffer[20] = "Hello, World!";
	size_t n = 5;

	printf("Before ft_bzero: %s\n", buffer);
	ft_bzero(buffer, n);
	printf("After ft_bzero: %s\n", buffer);
}
*/