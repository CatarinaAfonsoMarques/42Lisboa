/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:49:38 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/01 15:58:46 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (count == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
	size_t count = 5;
    size_t size = sizeof(int);
    int *arr = (int *)ft_calloc(count, size);

    if (!arr)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    for (size_t i = 0; i < count; i++)
        printf("arr[%zu] = %d\n", i, arr[i]);

    free(arr);
    return (0);
}
*/