/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:21:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/29 18:56:06 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

/*#include <stdio.h>
int	main(void)
{
    printf("c %d\n", ft_isdigit('c'));
    printf("2 %d\n", ft_isdigit('2'));
    printf("  %d\n", ft_isdigit(' '));
    printf(", %d\n", ft_isdigit(','));
    printf("V %d\n", ft_isdigit('V'));
}
*/
