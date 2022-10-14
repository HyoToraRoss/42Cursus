/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:07:57 by martavar          #+#    #+#             */
/*   Updated: 2022/10/14 17:36:15 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

//The strlcpy() function copies the null-terminated string from src to dst
//(up to size characters). To help prevent writing outside the bounds of 
//the array, the strlcpy(). The functions accept the full size of the 
//destination string as a size parameter. For static buffers, 
//this value is easily computed at compile time using the sizeof() operator.
//Both functions guarantee that the destination string is null terminated 
//for all nonzero-length buffers.The strlcpy() and strlcat() functions return
//the total length of the string they tried to create. 
//For strlcpy() that is simply the length of the source