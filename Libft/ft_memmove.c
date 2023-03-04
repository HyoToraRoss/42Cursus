/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:57:40 by martavar          #+#    #+#             */
/*   Updated: 2022/11/04 14:33:40 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	while (i != n)
	{
		d[n - i - 1] = s[n - i - 1];
		i++;
	}
	return (dest);
}
