#include <stdlib.h>
#include <stdio.h>

int		word_counter(char *str)
{
	int i = 0;
	int counter = 0;

	while (str[i])
	{
		if (str[i] > 32 && str[i] < 127)
		{
			counter++;
			while (str[i] && (str[i] > 32 && str[i] < 127))
			i++;
		}
		else
			i++;
	}
	return (counter);
}

char	*sub_str_extracter(char *str)
{
	char	*sub_str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[len] && (str[len] > 32 && str[len] < 127))
		len++;
	sub_str = malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return NULL;
	while (str[i] && (str[i] > 32 && str[i] < 127))
	{
		sub_str[i] = str[i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

char	**ft_split(char *str)
{
	char	**split;
	int		i = 0;
	int		checker = 0;

	split = malloc(sizeof(char*) * (word_counter(str) + 1));
	if (!split)
		return NULL;
	while (*str)
	{
		while (*str == 32 || (*str >= 9 && *str <= 13))
		{
			str++;
			checker = 0;
		}
		while (*str > 32 && *str < 127)
		{
			if (checker == 0)
			{
				split[i] = sub_str_extracter(str);
				i++;
				checker = 1;
			}
			str++;
		}
	}
	split[i] = 0;
	return (split);
}

int		main()
{
	char	**array;
	int		i;

	i = 0;
	array = ft_split("a   b   c    d");
	while (array[i])
	{
		printf("str:%s\n", array[i]);
		i++;
	}
}
