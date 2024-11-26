/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:07:24 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:48:54 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns lenght of string dest + src

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