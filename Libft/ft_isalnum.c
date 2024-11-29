/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:21:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/29 19:06:25 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') \
	|| (c >= '0' && c <= '9'));
}

/*#include <stdio.h>
int	main(void)
{
    printf("c %d\n", ft_isalnum('c'));
    printf("2 %d\n", ft_isalnum('2'));
    printf("  %d\n", ft_isalnum(' '));
    printf(", %d\n", ft_isalnum(','));
    printf("V %d\n", ft_isalnum('V'));
}
*/