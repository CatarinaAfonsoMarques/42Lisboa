/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:07:24 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/03 19:37:03 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatena src no fim de dest returns lenght of string dest + src

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + ft_strlen(src));
	i = 0;
	while (i < ft_strlen(src) && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}

/* int main(void)
{
	char *dest;

	dest = calloc(30, sizeof(char));
	//printf("%zu ", ft_strlcat("1234", "5678", 10));
	//printf("%d\n", strlcat("1234", "5678", 10));
	//printf("%zu ", ft_strlcat("1234", "5678", 0));
	//printf("%d\n", strlcat("1234", "5678", 0));
	//printf("%zu ", ft_strlcat("", "", 0));
		//printf("%d\n", strlcat("", "", 0));
	//printf("%zu ", ft_strlcat("123", "", 10));
	//printf("%d\n", strlcat("123", "", 10));
	//printf("%zu ", ft_strlcat("", "123", 10));
	//printf("%d\n", strlcat("", "123", 10));
	printf("%zu ", ft_strlcat(dest, "123", 0));
	printf("%s ", dest);
} */