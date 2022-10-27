/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:14:21 by martavar          #+#    #+#             */
/*   Updated: 2022/10/27 12:06:16 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	while (s[i] && i < n)
	{
		if (s[i] == c)
			return ((char *)s[i]);
		i++;
	}
	return (NULL);
}

//The  memchr()  function  scans  the  initial  n bytes of the memory area 
//pointed to by s for the first instance of c.  Both c and the bytes of the
//memory area pointed to by s are interpreted as unsigned char.
//The memchr() and memrchr() functions return a pointer to the matching byte
//or NULL if the character does not occur in the given memory area.