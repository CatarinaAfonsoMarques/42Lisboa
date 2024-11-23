/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:20:06 by caafonso          #+#    #+#             */
/*   Updated: 2024/11/23 19:03:55 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd,"\n", 1);
	
}
/*
int	main(void)
{
	ft_putendl_fd("hello", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("stdout.", 1);
	ft_putendl_fd("stdin.", 0); 
	ft_putendl_fd("error message.", 2);
}
*/