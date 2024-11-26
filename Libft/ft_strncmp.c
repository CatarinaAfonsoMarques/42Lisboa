/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:34:08 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:45:30 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t  i;
	
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && n > 0)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
    printf("%d ", ft_strncmp("\375ABC", "AB", 3));
    printf("%d\n", strncmp("\375ABC", "AB", 3));
    printf("%d ", ft_strncmp("ABC", "ABC", 3));
    printf("%d\n", strncmp("ABC", "ABC", 3));
    printf("%d ", ft_strncmp("ABA", "ABZ", 3));
    printf("%d\n", strncmp("ABA", "ABZ", 3));
}
*/
