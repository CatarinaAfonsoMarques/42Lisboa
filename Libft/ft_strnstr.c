/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:16:49 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:45:45 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!haystack)
		return (NULL);
	while (i <= len && haystack[i] != '\0' && needle[j] != '\0')
	{
		if(haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		else if (haystack[i + j] != needle[j])
		{
			j = 0;
			i++;
		}
	}
	return ((char *)&haystack[i]);
}
/*
int	main(void)
{
	printf("%s\n", ft_strnstr("ola bom dia", "bom", 11));
	//printf("%s\n", strnstr("ola bom dia", "bom", 11));
	printf("%s\n", ft_strnstr("ola bom dia", "bons", 11));
	//printf("%s\n", strnstr("ola bom dia", "bons", 11));
	printf("%s\n", ft_strnstr("ola bom dia", "", 11));
	//printf("%s\n", strnstr("ola bom dia", "", 11));
	printf("%s\n", ft_strnstr("", "bom", 11));
	//printf("%s\n", strnstr("", "bom", 11));
	printf("%s\n", ft_strnstr("", "", 11));
	//printf("%s\n", strnstr("", "", 11));
	printf("%s\n", ft_strnstr("ola bom1 bom2 dia", "bom", 11));
	//printf("%s\n", strnstr("ola bom dia", "bom", 11));
}
*/