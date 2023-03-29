#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putnbr(int nbr)
{
	char hex[] = "0123456789abcdef";

	if (nbr >= 16)
		ft_putnbr(nbr / 16);
	write(1, &hex[nbr % 16], 1);
}

int ft_atoi(char *str)
{
	int result = 0;

	while (*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(ft_atoi(argv[1]));
	write(1, "\n", 1);
}
