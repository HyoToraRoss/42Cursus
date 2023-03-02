#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(const char *str)
{
	int	i = 0;
	int	signal = 1;
	int nbr = 0;


	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		signal = -1;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (signal * nbr);
}

int main()
{
	char	str[] = "    +85935kgk79";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}