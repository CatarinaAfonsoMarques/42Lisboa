/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:47:44 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/08 21:17:09 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ss[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char *str = "Ola bom dia";
	printf("%s\n", str);
	printf("%s\n", ft_memset(str, 32, 4));
}