/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:20:02 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/26 14:48:12 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('c',1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(' ',1);
	write(1, "\n", 1);
	ft_putchar_fd('c',0);
	write(1, "\n", 1);
	ft_putchar_fd('c',2);
	write(1, "\n", 1);
}
*/