#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	if (len >= ft_strlen(s))
		len = (ft_strlen(s) - start);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	counter(char const *str, char c)
{
	unsigned int	i;
	int				counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			counter++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (counter);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	split = malloc(sizeof(char **) * (counter(str, c) + 1));
	if (!split || !str)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > j)
		{
			split[k] = ft_substr(str, j, i - j);
			k++;
		}
	}
	split[k] = NULL;
	return (split);
}
