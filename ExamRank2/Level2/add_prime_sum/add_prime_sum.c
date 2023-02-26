#include <unistd.h>

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

int is_prime(int nbr)
{
	int i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i <= (nbr / 2))
	{
		if (!(nbr % i))
			return (0);
		else
			i++;
	}
	return (1);
}

void ft_putnbr(int nbr)
{
	char c;

	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nbr = ft_atoi(argv[1]);
		int sum = 0;

		while (nbr > 0)
			if (is_prime(nbr--))
				sum += (nbr + 1);
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
