/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:20:04 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:44:18 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_fd("hello", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("stdout.", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("stdin.", 0); 
	write(1, "\n", 1);
	ft_putstr_fd("error message.", 2);
	write(1, "\n", 1);
}
*/