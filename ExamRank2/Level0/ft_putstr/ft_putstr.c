#include <unistd.h>

void    ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main()
{
	char str[] = "Fuck My Life";

	ft_putstr(str);
}