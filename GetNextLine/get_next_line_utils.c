/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:52:57 by martavar          #+#    #+#             */
/*   Updated: 2022/12/07 16:27:54 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] && c[i] != '\n')
		i++;
	if (c[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	free (s1);
	while (s2)
	{
		str[i++] = *s2;
		if (*s2++ == '\n')
			break ;
	}
	str[i] = '\0';
	return (str);
}

int	ft_clean(char *buf)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			while (buf[i])
				buf[j++] = buf[i];
			return (1);
		}
		else
			buf[i++] = '\0';
	}
	return (0);
}
