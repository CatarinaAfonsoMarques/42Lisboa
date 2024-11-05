/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:20:38 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/05 18:22:50 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//returns size of src after copying it to dest

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{ 
    size_t i;

    i = 0;
    if (size <= 0)
        return (0);
    while (size > 0 && src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    i = 0;
    while (src[i] != '\0')
        i++;
    return (i);
}
/*
int main(void)
{
    char dst[5] = "1234";
    printf("%zu\n", ft_strlcpy(dst, 0, 3));
    printf("%d\n", strlcpy(dst, 0, 3));
}
*/
