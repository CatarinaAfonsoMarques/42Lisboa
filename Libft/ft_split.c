/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:05:31 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/05 19:33:11 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //usar malloc e free :')

static int	ft_skip_del(const char *s, char c, int index);
static int	ft_banana(const char *s, char **res, char c, int i);
static int	ft_countwords(const char *s, char c);
static void	*ft_eren_yeager(char **result, int count);

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		count;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	res = ft_calloc(count + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (count > 0 && s[i] != '\0')
	{
		i = ft_skip_del(s, c, i);
		i = ft_banana(s, &res[j], c, i);
		if (i == 0)
			return (ft_eren_yeager(res, count));
		j++;
	}
	return (res);
}

static int	ft_banana(const char *s, char **res, char c, int i)
{
	int	start;

	start = i;
	while (s[i] != c && s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == 0))
		{
			*res = ft_substr(s, start, i - start + 1);
			if (*res == NULL)
				return (0);
			start = i + 1;
		}
		i++;
	}
	return (i);
}

static int	ft_skip_del(const char *s, char c, int i)
{
	while (s[i] == c && s[i] != '\0')
		i++;
	return (i);
}

static int	ft_countwords(const char *s, char c)
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

static void	*ft_eren_yeager(char **result, int count)
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