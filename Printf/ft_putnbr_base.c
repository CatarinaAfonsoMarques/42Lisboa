/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:44:57 by caafonso          #+#    #+#             */
/*   Updated: 2025/01/17 18:45:11 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
	int	count;
	int	put;

	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
		count++;
	}
	if (nbr > ft_strlen(base))
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
	}
	count++;
	put = nbr % ft_strlen(base);
	write(1, &base[put], 1);
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("testes q a raquel me obrigou a fazer");
	write(1, "\n", 1);
	ft_putnbr_base(123, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(123, HEXAUPPER);
	write(1, "\n", 1);
	ft_putnbr_base(123, HEXALOWER);
	write(1, "\n", 1);
}*/