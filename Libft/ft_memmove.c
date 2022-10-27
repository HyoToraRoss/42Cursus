/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:57:40 by martavar          #+#    #+#             */
/*   Updated: 2022/10/27 10:28:16 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	temp[225];
	size_t	i;

	i = 0;
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	if (i > n)
	{
		i--;
	}
	while (i < n)
	{
		dest[i-1] = temp[i-1];
		i--;
	}
	return (dest);
}

//The memmove function copies n bytes from memory area src to memory area dest
//The memory areas may overlap: copying takes place as though the bytes in src
//are first copied into a temporary array that does not overlap src or dest, and
//the bytes are then copied from the temporary array to dest.
//The memmove() function returns a pointer to dest.

//#include <string.h>

