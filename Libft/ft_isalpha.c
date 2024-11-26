/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:21:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:37:15 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'));
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
    printf(" %d\n", isalpha('c'));
    printf(" %d\n", ft_isalpha('c'));
    printf("  %d\n", isalpha(' '));
    printf(" %d\n", ft_isalpha(' '));
    printf("V %d\n", ft_isalpha('V'));
}
*/
