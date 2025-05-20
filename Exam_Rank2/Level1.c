#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// first_word

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i]==' ' || str[i]=='\t' || str[i]=='\r')
			i++;
	while (str[i]!='\0' && !(str[i]==' ' || str[i]=='\t' || str[i]=='\r'))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putstr(argv[1]);
	write(1, "\n", 1);
}

//fizzbuzz

void	ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	char c = i % 10 + '32';
	write(1, &c, 1);
}

int main(void)
{
	int i = 0;
	while (i<=100)
	{
		if(i%3 == 0 && i%5 == 0)
			write(1, "fizzbuzz", 8);
		else if(i%5 == 0)
			write(1, "buzz", 4);
		else if(i%3 == 0)
			write(1, "fizz", 3);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}

//ft_putstr

void	ft_putstr(char *str)
{
	int i=0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

//ft_strcpy

char	*ft_strcpy(char *s1, char *s2)
{
	int i=0;
	while(s1[i] != '\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

//ft_strlen

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

//ft_swap

static int temp;

//repeat_alpha

int	main(int argc, char **argv)
{
	int i = 0;
	int repeat;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat = argv[1][i] - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				repeat = argv[1][i] - 'A' + 1;
			else
				repeat = 1;

			while (repeat--)
				write(1, &argv[1][i], 1);

			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//rev_print



//rot_13



//rotone



//search_and_replace



//ulstr
