/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:21:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/10/30 12:52:16 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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