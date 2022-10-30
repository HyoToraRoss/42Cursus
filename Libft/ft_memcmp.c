/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:21:31 by martavar          #+#    #+#             */
/*   Updated: 2022/10/30 16:56:26 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] == str2[i])
			i++;
	}
	return (str2 - str1);
}

//The memcmp() function compares the first n bytes (each interpreted as
//unsigned char) of the memory areas s1 and s2.
//The  memcmp()  function  returns  an  integer less than, equal to, or
//greater than zero if the first n bytes of s1 is found, respectively, 
//to be less than, to match, or be greater than the first n bytes of s2.
//For a nonzero return value, the sign is determined by the sign of the
//difference between the first pair of bytes (interpreted as unsigned char)
// that differ in s1 and s2. If n is zero, the return value is zero.