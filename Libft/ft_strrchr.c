/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:39:59 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 16:21:36 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//devolve string a partir do ponto q encontra c
char	*ft_strrchr(const char *s, int c)
{
	int	len;
	char	cchar;

	cchar = (char) c;
	len = ft_strlen(s);
	if (s[len] == cchar)
		return ((char *)&s[len]);
	while (len > 0)
	{
		if (s[len - 1] == cchar)
			return ((char *)&s[len - 1]);
		len--;
	}
	return (NULL);
}
/*
int main(void)
{
    const char str[] = "Hello, world!";
    printf("Test 1: Searching 'o' in \"%s\"\n", str);
    printf("ft_strrchr: %s\n", ft_strrchr(str, 'o'));
    printf("strrchr:    %s\n\n", strrchr(str, 'o'));
    printf("Test 2: Searching 'H' in \"%s\"\n", str);
    printf("ft_strrchr: %s\n", ft_strrchr(str, 'H'));
    printf("strrchr:    %s\n\n", strrchr(str, 'H'));
    printf("Test 3: Searching '!' in \"%s\"\n", str);
    printf("ft_strrchr: %s\n", ft_strrchr(str, '!'));
    printf("strrchr:    %s\n\n", strrchr(str, '!'));
    printf("Test 4: Searching 'x' in \"%s\"\n", str);
    printf("ft_strrchr: %p\n", ft_strrchr(str, 'x'));
    printf("strrchr:    %p\n\n", strrchr(str, 'x'));
    printf("Test 5: Searching '\\0' in \"%s\"\n", str);
    printf("ft_strrchr: %p\n", ft_strrchr(str, '\0'));
    printf("strrchr:    %p\n\n", strrchr(str, '\0'));
}
*/