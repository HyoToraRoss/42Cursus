/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:30:17 by martavar          #+#    #+#             */
/*   Updated: 2022/11/11 18:02:21 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	size(char const *str, char c)
{
	unsigned int	i;
	int				counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			counter ++;
			while (str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (counter);
}
char	**ft_split(char const *str, char c)
{
	char	**split;
	int		start;
	int		end;
	int		i;

	split = malloc(sizeof(char **) * size(str, c) + 1);
	if (!split || !str)
		return (NULL);
	end = 0;
	i = 0;
	while (str[end])
	{
		while (str[end] == c)
			end++;
		start = end;
		while (str[end] && str[i] != c)
			end++;
		if (i > j)
		{
			split[k] = ft_substr(str, start, end - start);
			k++;
		}
	}
	split[k] = Null;
	return (split);
}