/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:21:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:47:42 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c > 32 && c < 126);
}

/*#include <stdio.h>
int	main(void)
{
    printf("c %d\n", ft_isprint('c'));
    printf("2 %d\n", ft_isprint('2'));
    printf("  %d\n", ft_isprint(' '));
    printf(", %d\n", ft_isprint(','));
    printf("V %d\n", ft_isprint('V'));
}
*/