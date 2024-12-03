/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:05:31 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/02 21:29:52 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //usar malloc e free :')

char **ft_split(const char *s, char c)
{
	int	start;
	int	end;
	int	count;
	int	i;
	char	**result;
	char	*word;

	if (!s)
		return (NULL);
	count = ft_countwords(s,c);
	result = calloc(count + 1, sizeof (char));
	if (!result)
		return (NULL);
	start = 0;
	end = 0;
	i = 0;
	while(count > 0 && s && strrchr(s, c))
	{
		if (s[i + 1] != c)
			end++;
		else if (s[i + 1] == c || count = 1)
		{
			result[?] = ft_substr(s, start, end - start + 1);
			count--;
			start = i + 2;
			end = i + 2;
		}
		i++;
	}
	free();
	return (result);
}

int	ft_countwords(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}