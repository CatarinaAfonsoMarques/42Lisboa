/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:05:26 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/03 15:45:48 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	result = calloc(ft_strlen(s) + 1, sizeof (char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < ft_strlen(s))
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	
}*/