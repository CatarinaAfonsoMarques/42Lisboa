/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:55:14 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/18 21:39:08 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int main(void)
{
	printf("%d\n", ft_tolower('c'));
	printf("%d\n", ft_tolower('0'));
	printf("%d\n", ft_tolower('frc'));
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower('a'));
	printf("%d\n", ft_tolower('z'));
}
*/