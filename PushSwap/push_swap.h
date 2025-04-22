/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:22:09 by caafonso          #+#    #+#             */
/*   Updated: 2025/04/08 17:22:09 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <libft.h>

void	ft_swap(char *c);
void	ft_push(char *c, char *d);
void	ft_rotate(char c);
void	ft_rev_rotate(char c);
void	push_swap(char *stack_a);

#endif