/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:21:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/10/30 13:57:37 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
    return ((c > '0' && c < '9'));
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