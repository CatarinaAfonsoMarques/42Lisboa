/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:44:57 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/27 19:35:48 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr_base(long nbr, char *base)
{
	int	put;
	int	count;

	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		count++;
		nbr = -nbr;
	}
	if (nbr >= ft_strlen(base))
	{
		count += ft_putnbr_base(nbr / ft_strlen(base), base);
	}
	put = nbr % ft_strlen(base);
	write(1, &base[put], 1);
	count++;
	return (count);
}


/*
int	main(void)
{
	int count;

	count = ft_printf(" %d  %d", -1, 12);
	printf("\n count1 %d", count);

	count = ft_putnbr_base(-123, "0123456789");
	printf("\n count2 %d", count);

	count = ft_putnbr_base(123, HEXAUPPER);
	printf("\n count3 %d", count);

	count = ft_putnbr_base(123, HEXALOWER);
	printf("\n count4 %d ", count);

} */