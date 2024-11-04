/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:16:49 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/01 16:16:49 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (len > 0 && haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0' && i < len)
    {
        i++;
        j++;
    }
    elif (len > 0 && haystack[i] != needle[j] && haystack[i] != '\0' && needle[j] != '\0' && i < len)
    {
        j = 0;
    }
     
}