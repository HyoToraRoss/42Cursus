#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

char *ft_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while(src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;

	char **split = malloc(sizeof(char **) * (ft_strlen(str) + 1));
	if (!split)
		return NULL;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' || !(str[i] >= 9 && str[i] <= 13)))
			i++;
		if (i > j)
		{
			split[k] = malloc(sizeof(char) * (i - j + 1));
			if (!split[k])
				return NULL;
			split[k] = ft_strncpy(split[k], str + j, i);
			k++;
		}
	}
	split[k] = NULL;
	return (split);
}

int	main(void)
{
	char	**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split(" hello, split   this,plz,  ");
	while (tab[i] != NULL)
	{
		write(1, &tab[i], 1);
		i++;
	}
}
