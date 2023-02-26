#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
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
	int word_count = 0;
	int len = ft_strlen(str);

	while (i < len)
	{
		while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
			i++;
		if (str[i])
		{
			word_count++;
			while(str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
				i++;
		}
	}
	char **result = malloc(sizeof(char) * (word_count + 1));
	if (!result)
		return NULL;
	i = 0;
	while (i < len)
	{
		while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
			i++;
		if (str[i])
		{
			j = i;
			while (str[j] && !(str[j] == ' ' || (str[i] >= 9 && str[i] <= 13)))
				j++;
			ft_strncpy(result[k], str + i, j - i);
			result[k][j - i] = '\0';
			k++;
			i = j;
		}
		result[k] = NULL;
	}
	return (result);
}

int	main(void)
{
	char	**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split(" hello, sp    lit   this,plz,  ");
	while (tab[i] != NULL)
	{
		write(1, &tab[i], 1);
		i++;
	}
}
