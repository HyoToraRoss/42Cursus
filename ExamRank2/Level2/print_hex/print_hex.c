#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putnbr(int nbr)
{
	char hex[] = "0123456789abcdef";

	if (nbr < 16)
	{
		write(1, &hex[nbr], 1);
	}
	else
	{
		ft_putnbr(nbr / 16);
		ft_putnbr(nbr % 16);
	}
}

int ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nbr = ft_atoi(argv[1]);
		if (nbr >= 0)
			ft_putnbr(nbr);
	}
	write(1, "\n", 1);
}
