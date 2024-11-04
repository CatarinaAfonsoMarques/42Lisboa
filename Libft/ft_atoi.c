/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:46:51 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/04 19:29:24 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int atoi(const char *nptr)
{
	int	i;
	int	rs;

	i = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\v' /
	|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '-')
	{
		i = -1;
		nptr++;
	}
	while (*nptr != '\0')
	{
		rs = rs * 10 + *nptr;
		nptr++;
	}
	return (rs * i);
}

int	main(void)
{
	
}