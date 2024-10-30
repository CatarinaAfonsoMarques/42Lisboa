/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:20:38 by caafonso          #+#    #+#             */
/*   Updated: 2024/10/30 19:56:11 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (size > 0 && src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    i = ft_strlen(src);
    return (i);
}

/*
size_t	ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(void)
{
    char dst[5] = "1234";
    printf("%zu\n", ft_strlcpy(dst, "ola", 3));
}
*/
