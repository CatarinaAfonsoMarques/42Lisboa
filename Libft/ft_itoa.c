/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:05:29 by caafonso          #+#    #+#             */
/*   Updated: 2024/12/03 17:11:58 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbr(long nb);

// +1 sinal, +1 null byte; dir -> esq pq sabemos o fim
//longs e verificar os negativos
char	*ft_itoa(int n)
{
	char	*result;
	int		count;
	long	nn;

	nn = n;
	count = count_nbr(nn);
	result = ft_calloc(count + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (nn < 0)
	{
		result[0] = '-';
		nn = -nn;
	}
	while (nn > 9)
	{
		result[count - 1] = nn % 10 + 48;
		nn = nn / 10;
		count--;
	}
	result[count - 1] = nn + 48;
	return (result);
}

int	count_nbr(long nb)
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

/* int	main(void)
{
	printf("%s (my itoa)", ft_itoa(150));
} */