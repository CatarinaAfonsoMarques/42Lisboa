/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:16:33 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/29 19:23:49 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int main(void)
{
	printf("%d\n", ft_toupper('c'));
	printf("%d\n", ft_toupper(0));
	//printf("%d\n", ft_toupper('frc'));
	printf("%d\n", ft_toupper('A'));
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('z'));
	//printf("%d\n", ft_toupper(''));
}
*/