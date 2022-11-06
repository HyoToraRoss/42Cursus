/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:07:17 by martavar          #+#    #+#             */
/*   Updated: 2022/11/06 23:39:46 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char const *str, char c)
{
	unsigned int	i;
	int				counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != '\0')
			counter++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (counter);
}

char	**ft_split(char const *str, char c)
{
	size_t	i;
	size_t	j;
	char	**split;
	int		startword;

	if (!str)
		return (0);
	split = malloc((counter(str, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	startword = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && startword < 0)
			startword = i;
		else if ((s[i] == c || i == ft_strlen(s)) && startword >= 0)
		{
			split[j++] = word_dup(s, startword, i);
			startword = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*
#include <stdio.h>

int main(void)
{
	//char test[] = "\njrS58VHQ    \n      p70fL       Kx2sRP0So3E4rC9  \n nebpv3J5ousO84Pa1HjUQOImUhjwZpGn    \n \n   X28iT7Ap9   DIYAF9ZSpKcs0Rcv\n uzO\n        \nZ7zjEeonALOKQF5xq \n   \nQxp0b1ufFKGJ \n2n8R9zUvZEtOwmqf\n    ";
	char test[] = "DIYAF9ZSpKcs0Rcv \n uzO\n        \nZ7zjEeonALOKQF5xq \n   \nQxp0b1ufFKGJ \n2n8R9zUvZEtOwmqf\n    ";
	 
	char **arr = ft_split(test, '\n');
	 
	int i = 0;
	while (arr[i] != 0)
	{
		printf("[%s]\n", arr[i]);
		++i;
	}
}
*/