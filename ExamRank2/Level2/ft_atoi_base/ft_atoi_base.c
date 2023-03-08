char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	get_nbr(char c, int nbr_base)
{
	int	max_nbr;
	if (nbr_base <= 10)
		max_nbr = nbr_base + '0';
	else
		max_nbr = nbr_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_nbr)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_nbr)
		return (10 + c - 'a');
	else
		return (-1);
}

int     ft_atoi_base(const char *str, int str_base)
{
	int	result = 0;
	int	sign = 1;
	int	nbr;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((nbr = get_nbr(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (nbr * sign);
		str++;
	}
	return result;
}