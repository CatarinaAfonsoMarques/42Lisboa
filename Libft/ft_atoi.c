/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:46:51 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/29 19:34:08 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	neg;
	int	rs;
	int	i;

	neg = 1;
	rs = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		rs = rs * 10 + nptr[i] - 48;
		i++;
	}
	return (rs * neg);
}
/* 
int	main(void)
{
	printf("%d ", ft_atoi(" 	142"));
	printf("%d\n", atoi(" 	142"));
	printf("%d ", ft_atoi(" 	-142"));
	printf("%d\n", atoi(" 	-142"));
	printf("%d ", ft_atoi(" 	+-142"));
	printf("%d\n", atoi(" 	+-142"));
	printf("%d ", ft_atoi(" -+142"));
	printf("%d\n", atoi(" -+142"));
	printf("%d ", ft_atoi(" 	+142"));
	printf("%d\n", atoi(" 	+142"));
	printf("%d ", ft_atoi(" 33	142"));
	printf("%d\n", atoi(" 33	142"));
	printf("%d ", ft_atoi(" 33	-142"));
	printf("%d\n", atoi(" 33	-142"));
	printf("%d ", ft_atoi(" 	14 2"));
	printf("%d\n", atoi(" 	14 2"));
	printf("%d ", ft_atoi(" 	.142"));
	printf("%d\n", atoi(" 	.142"));
	printf("%d ", ft_atoi(" 	-14.2"));
	printf("%d\n", atoi(" 	-14.2"));
	printf("%d ", ft_atoi(" 	142"));
	printf("%d\n", atoi(" 	142"));
	printf("%d ", ft_atoi(""));
	printf("%d\n", atoi(""));
	printf("%d ", ft_atoi((void*)0));
	//printf("%d\n", atoi((void*)0));
} */
