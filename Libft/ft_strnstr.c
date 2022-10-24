/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:46:20 by martavar          #+#    #+#             */
/*   Updated: 2022/10/24 17:06:49 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	if (little == '\0')
		return ((char *)big);
	b = (char *)big;
	l = (char *)little;
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i] == little[j])
		{
			if (big[i] == little[j])
				return ((char *)little[j]);
			j++;
		}
		i++;
	}
	return (NULL);
}
