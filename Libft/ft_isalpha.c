/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:21:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/10/30 13:42:36 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
    return ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'));
}

/*#include <stdio.h>
int	main(void)
{
    printf("c %d\n", ft_isalpha('c'));
    printf("2 %d\n", ft_isalpha('2'));
    printf("  %d\n", ft_isalpha(' '));
    printf(", %d\n", ft_isalpha(','));
    printf("V %d\n", ft_isalpham('V'));
}
*/