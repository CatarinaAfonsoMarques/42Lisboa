/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:07:24 by caafonso          #+#    #+#             */
/*   Updated: 2024/10/31 17:07:24 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//returns lenght of string dest + src

size_t strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (size <= 0)
        return (0);
    while (i < size - 1 && src[i] != '\0' && size > 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    i = ft_strlen(src) + size;
    return (i);
}