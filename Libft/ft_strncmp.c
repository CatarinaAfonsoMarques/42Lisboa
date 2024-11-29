/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:34:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/29 20:49:42 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compares s1 and s2 until n
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
{
    printf("%d ", ft_strncmp("\375ABC", "AB", 3));
    printf("%d\n", strncmp("\375ABC", "AB", 3));
    printf("%d ", ft_strncmp("ABC", "ABC", 3));
    printf("%d\n", strncmp("ABC", "ABC", 3));
    printf("%d ", ft_strncmp("ABA", "ABZ", 3));
    printf("%d\n", strncmp("ABA", "ABZ", 3));
	printf("%d ", ft_strncmp("1234", "1235", 3));
    printf("%d\n", strncmp("1234", "1235", 3));
}*/
