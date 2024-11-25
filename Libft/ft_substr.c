/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:34:23 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/25 19:57:26 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	if (!s || len + start > ft_strlen(s))
		return (NULL);
	if (start > ft_strlen(s))
		return ();
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	return (result);
}