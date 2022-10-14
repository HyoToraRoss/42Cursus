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
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	if (0 < size)
	{
		while (dst[i] != '\0')
			i++;
		len_dst = i;
		len_src = 0;
		while (i < size - 1 && src[len_src] != '\0')
		{
			dst[i] = src[len_src];
			i++;
			len_src++;
		}
		dst[i] = '\0';
	}
	while (src[len_src] != '\0')
		len_src++;
	return (len_dst + len_src);
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