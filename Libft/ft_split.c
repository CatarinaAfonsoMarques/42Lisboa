/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:05:31 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/03 19:13:29 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //usar malloc e free :')

int	ft_countwords(const char *s, char c);
void	*ft_eren_yeager(char **result, int count);

char	**ft_split(const char *s, char c)
{
	char	**result;
	int	count;
	int	start;
	int	i;
	int	j;

	if (!s)
		return (NULL);
	count = ft_countwords(s,c);
	result = ft_calloc(count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	start = 0;
	i = 0;
	j = 0;
	while (count > 0 && s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
		{
			i++;
			start++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			if ((s[i + 1] == c || s[i + 1] == 0) && j < count)
			{
				result[j] = ft_substr(s, start, i - start + 1);
					if (result[j] == NULL)
						return (ft_eren_yeager(result, count));
				j++;
				start = i + 1;
			}
			i++;
		}
	}
	return (result);
}

char	**ft_hell(const char *s, char **result, char c, int count, int j)
{
	int	start;
	int	i;
	
	start = 0;
	i = 0;
	while (s[i] == c && s[i] != '\0')
	{
		i++;
		start++;
	}
	while (s[i] != c && s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == 0) && j < count)
		{
			result[j] = ft_substr(s, start, i - start + 1);
				if (result[j] == NULL)
					return (ft_eren_yeager(result, count));
			j++;
			start = i + 1;
		}
		i++;
	}
	return(result);
}

int	ft_countwords(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
				i++;
		while (s[i] != c && s[i])
		{
			if (s[i + 1] == c || s[i + 1] == 0)
				count++;
			i++;
		}
	}
	return (count);
}

void	*ft_eren_yeager(char **result, int count)
{
	int	i;

	i = 0;
	while (i <= count)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

/* int	main(void)
{
	int i = 0;
	char	*s = "  bom        DIa      flor    do dia";
	char	c = ' ';
	int	words = ft_countwords(s, c);
	char	**split = ft_split(s, c);
	
	while (i <= words)
	{
		printf("%s|\n", split[i]);
		i++;
	}
	ft_eren_yeager(result, words);
} */