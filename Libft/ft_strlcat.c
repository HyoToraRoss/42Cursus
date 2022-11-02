/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:17:08 by martavar          #+#    #+#             */
/*   Updated: 2022/10/14 17:36:07 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

//The strlcat() function appends the null-terminated string src to 
//the end of dst (but no more than size characters will be in the destination).
//To help prevent writing outside the bounds of the array, and strlcat() 
//function accepts the full size of the destination string as a size parameter.
//For static buffers, this value is easily computed at compile time using the 
//sizeof() operator.Both functions guarantee that the destination string is null
//terminated for all nonzero-length buffers. The strlcat() function returns the
//total length of the string they tried to create. For strlcat() is the length
//of the destination (before concatenation) plus the length of the source 