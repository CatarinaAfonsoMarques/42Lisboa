/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:21:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:47:30 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c > 0 && c < 127);
}

/*#include <stdio.h>
int	main(void)
{
    printf("c %d\n", ft_isascii('c'));
    printf("2 %d\n", ft_isascii('2'));
    printf("  %d\n", ft_isascii(' '));
    printf(", %d\n", ft_isascii(','));
    printf("V %d\n", ft_isascii('V'));
}
*/