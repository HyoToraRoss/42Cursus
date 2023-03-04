/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:43:07 by martavar          #+#    #+#             */
/*   Updated: 2022/11/04 16:57:51 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	chr = c;
	while (str[i] != chr)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)str + i);
}
