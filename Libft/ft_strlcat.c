/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:07:24 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/07 16:05:30 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <sys/types.h>

//returns lenght of string dest + src

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
}

int main(void)
{
	printf("%zu ", ft_strlcat("1234", "5678", 10));
	//printf("%d\n", strlcat("1234", "5678", 10));
	printf("%zu ", ft_strlcat("1234", "5678", 0));
	//printf("%d\n", strlcat("1234", "5678", 0));
	printf("%zu ", ft_strlcat("", "", 0));
		//printf("%d\n", strlcat("", "", 0));
}