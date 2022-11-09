/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:07:17 by martavar          #+#    #+#             */
/*   Updated: 2022/11/09 21:28:48 by martavar         ###   ########.fr       */
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

/*
#include <stdio.h>
 
int      main(void)
{
	//char test[] = "\njrS58VHQ    \n      p70fL       Kx2sRP0So3E4rC9  \n|
		nebpv3J5ousO84Pa1HjUQOImUhjwZpGn    \n \n   X28iT7Ap9   DIYAF9ZSpK|
		cs0Rcv\n uzO\n        \nZ7zjEeonALOKQF5xq \n   \nQxp0b1ufFKGJ \n2n8|
		R9zUvZEtOwmqf\n    ";
	char test[] = "DIYAF9ZSpKcs0Rcv \n uzO\n        \nZ7zjEeonALOKQF5xq \n  |
		 \nQxp0b1ufFKGJ \n2n8R9zUvZEtOwmqf\n    ";
	 
	char **arr = ft_split(test, '\n');
	 
	int i = 0;
	while (arr[i] != 0)
	{
		printf("[%s]\n", arr[i]);
		++i;
	}
}
*/
