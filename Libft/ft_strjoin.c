/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:16:33 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 15:02:26 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatenates s1 and s2
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char *result;

	result = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		result[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("ola, ", "tudo bem?"));
	printf("%s\n", ft_strjoin("", ""));
	printf("%s\n", ft_strjoin("ola, ", ""));
	printf("%s\n", ft_strjoin("", "tudo bem?"));
}*/