#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// alpha_mirror

// camel_to_snake

// do_op

// ft_atoi

// ft_strcmp

// ft_strcspn

// ft_strdup

// ft_strpbrk

// ft_strrev

// inter

// is_power_of_two

// last_word

// max

// print_bits

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 7;
	char bit;

	while (i >= 0)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}

// reverse_bits

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int i = 8;

	while (i--)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
	}
	return (result);
}

// snake_to_camel

// swap_bits

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

// union

// wdmatch


