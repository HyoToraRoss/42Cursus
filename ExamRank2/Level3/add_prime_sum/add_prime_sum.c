#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (10 <= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int is_prime(int nbr)
{
	int	i;

	i = 3;
	if (nbr <= 1)
		return (0);
	if (nbr % 2 == 0 && nbr > 2)
		return (0);
	while (i < (nbr / 2))
	{
		if (nbr % 1 == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	end;

	i = 0;
	result = 1;
	end = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			result *= -1;
		if (!('0' <= str[i + 1] && str[i + 1] <= '9'))
			return (0);
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		end = end * 10 + (str[i] - '0');
		i++;
	}
	return (end * result);
}

int	main(int argc, char *argv)
{
	int	nbr;

	if (argc == 2 && nbr = ft_atoi(argv[1]) > 0)
	{
		int sum;

		sum = 0;
		while (0 < nbr)
		{
			if (is_prime(nbr--))
				sum += (nbr + 1);
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
