/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:05:29 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/03 00:23:37 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// +1 sinal, +1 null byte; dir -> esq pq sabemos o fim
//longs e verificar os negativos
char	*ft_itoa(int n)
{
	char	*result;
	int		count;

	count = count_nbr(n);
	result = calloc(count + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = "-";
		n = -n;
	}
	while (n > 9 && count > 1)
	{
		result[count - 1] = n % 10 + 48;
		n = n / 10;
		count--;
	}
	result[count - 1] = n;
	return (result);
}

int	count_nbr(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 9)
	{
		count++;
		nb = nb / 10;
	}
	count++;
	return (count);
}

int	main(void)
{
	
}