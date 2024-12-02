/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:16:49 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/01 17:23:05 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (haystack[0] == '\0')
		return (NULL);
	i = 0;
	j = 0;
	while (i + j < len && haystack[i + j] != '\0' && needle[j] != '\0')
	{
		if (haystack[i + j] != needle[j])
		{
			j = 0;
			i++;
		}
		else if (haystack[i + j] == needle[j])
		{
			if (j == ft_strlen(needle) - 1)
				return ((char *)&haystack[i]);
			else
				j++;
		}
	}
	return (NULL);
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