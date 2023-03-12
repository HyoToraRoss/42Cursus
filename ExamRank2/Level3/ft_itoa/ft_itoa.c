#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	int	n = nbr;
	int	len = 0;

	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	char *str = malloc(sizeof(char) * len + 1);
	if (!str)
		return 0;
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		str[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

int	main(void)
{
	printf("str:%s\n", ft_itoa(-214748367));
}
