/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:07:17 by martavar          #+#    #+#             */
/*   Updated: 2022/11/06 22:20:22 by martavar         ###   ########.fr       */
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
		while (str[i] != c)
			counter++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (counter);
}

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	i;

	str = malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	**temp;

	temp = malloc(sizeof(char **) * (counter(str, c) + 1));
	if (!temp)
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
			temp[k] = ft_strndup(str + j, i - j);
			k++;
		}
	}
	temp[k] = NULL;
	return (temp);
}
