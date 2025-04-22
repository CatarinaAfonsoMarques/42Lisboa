/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caafonso <caafonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:17:14 by caafonso          #+#    #+#             */
/*   Updated: 2025/04/09 16:33:25 by caafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *c)
{
	// recieves a stack and swaps its first 2 
	// nothing if len <= 1
	int	i;

	i = 0;
	if (ft_strlen(c) > 1)
	{
		i = c[0];
		c[0] = c[1];
		c[1] = i;
	}
}

void	ft_push(char *c, char *d)
{
	// top of a goes to top of b
	// nothing if []
	int	i;

	i = 0;
	if ()
	{
		i = c[0];
		c[0] = d[ft_strlen(d) - 1];
	}
}

void	ft_rotate(char c)
{
	// Shift up all elements of stack a by 1.
	// The first element becomes the last one.
	int	i;

	i = 0;
	
}

void	ft_rev_rotate()
{
	//Shift down all elements of stack a by 1.
	//The last element becomes the first one.
	int	i;

	i = 0;
	
}

void	push_swap(char *stack_a)
{
	//If no parameters, not display anything and return to the prompt.
	//In case of error, it must display "Error" followed by an ’\n’ on the standard error.
	//Errors include, for example: some arguments not being integers, some arguments
	//exceeding the integer limits, and/or the presence of duplicates.
	
	//create stack b
	//organize
	
	//return (shortest sequence of instructions needed to sort stack a, separated by \n)
}
int	main(int argc, char **argv)
{
	//contruir stack a com os argumentos?
	if (argc > 0)
	{
		char	*stack_a[argc];
		int		i;
		while (i < argc)
		{
			stack_a[i] = argv[i];
			i++;
		}
	}
}

// 2 1 3 6 5 8
