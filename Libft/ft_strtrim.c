/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:45:55 by martavar          #+#    #+#             */
/*   Updated: 2022/11/04 20:23:56 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1);
	str = malloc(sizeof(char) * (len + 1));
	str = (char *)s1;
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] == set[j])
		{
			str[i] = str[i + 1];
			j++;
		}
		i++;
	}
	return (str);
}
