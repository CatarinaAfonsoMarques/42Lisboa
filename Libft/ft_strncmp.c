/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:34:12 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/01 15:34:12 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i < n && n > 0)
    {
        if(s1[i] == s2[i])
            i++;
    }
    return (s1[i] - s2[i]);
}
int main()
{

}
