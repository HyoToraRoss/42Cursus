#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int count_words(char *str)
{
	int num_words = 0;
	while(*str == ' ' || )
}

char	**ft_split(char *str)
{
	int	num_words;
	char **split;

	num_words = count_words(str);
	split = malloc(sizeof(char *) * num_words + 1);

	split[num_words] = 0;
	fill_str(split, str);
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
