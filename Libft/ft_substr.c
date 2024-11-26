/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:34:23 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:46:59 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//se start maior que len s devolve lista vazia
//se o q sobra da string (sem o start) for <len entao so faz ate ao fim de s
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if(ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len && s[i + start] != 0)
	{
		result[i] = s[i + start];
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("Bonjour comment ca va?", 5, 8));
	printf("%s\n", ft_substr("Bonjour?", 3, 8));
	printf("%s\n", ft_substr("", 5, 8));
	printf("%s\n", ft_substr("Bonjour?", 9, 8));
}
*/
