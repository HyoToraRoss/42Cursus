/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:46:20 by martavar          #+#    #+#             */
/*   Updated: 2022/10/30 16:52:09 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	i;
	size_t	j;

	b = (char *)big;
	l = (char *)little;
	if (l[0] == '\0')
		return (b);
	i = 0;
	while (b[i] != '\0')
	{
		j = 0;
		if (b[i] == l[j])
		{
			while (b[i + j] == l[j] && (j + i) < len && l[j])
				j++;
			if (l[j] == '\0')
				return (&b[i]);
		}
		i++;
	}
	return (NULL);
}
