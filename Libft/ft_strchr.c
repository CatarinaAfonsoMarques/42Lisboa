/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:12:54 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/18 22:13:05 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int	i;
	char	cchar;

	cchar = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cchar)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cchar)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main(void)
{
	char str1[] = "Hello, world!";
    char ch1 = 'o';
    printf("Test 1: Searching '%c' in \"%s\"\n", ch1, str1);
    printf("ft_strchr: %s\n", ft_strchr(str1, ch1));
    printf("strchr:    %s\n\n", strchr(str1, ch1));
    char ch2 = 'x';
    printf("Test 2: Searching '%c' in \"%s\"\n", ch2, str1);
    printf("ft_strchr: %s\n", ft_strchr(str1, ch2));
    printf("strchr:    %s\n\n", strchr(str1, ch2));
    char ch3 = '!';
    printf("Test 3: Searching '%c' in \"%s\"\n", ch3, str1);
    printf("ft_strchr: %s\n", ft_strchr(str1, ch3));
    printf("strchr:    %s\n\n", strchr(str1, ch3));
    char ch5 = '\0';
    printf("Test 5: Searching '\\0' in \"%s\"\n", str1);
    printf("ft_strchr: %p\n", ft_strchr(str1, ch5));
    printf("strchr:    %p\n\n", strchr(str1, ch5));

    char str2[] = "";
    char ch6 = 'a';
    printf("Test 6: Searching '%c' in an empty string \"%s\"\n", ch6, str2);
    printf("ft_strchr: %p\n", ft_strchr(str2, ch6));
    printf("strchr:    %p\n\n", strchr(str2, ch6));
    int ch8 = 300; // Equivalent to char value of (300 % 256)
    printf("Test 7: Searching '%c' in \"%s\"\n", (char)ch8, str1);
    printf("ft_strchr: %p\n", ft_strchr(str1, ch8));
    printf("strchr:    %p\n\n", strchr(str1, ch8));

    //const char *str4 = NULL;
    //char ch9 = 'a';
    //printf("Test 9: Searching '%c' in a NULL pointer\n", ch9);
	//printf("ft_strchr: %p\n", ft_strchr(str4, ch9));
	//printf("strchr:    %p\n\n", strchr(str4, ch9));
}
*/