/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:48:52 by martavar          #+#    #+#             */
/*   Updated: 2022/10/30 16:57:26 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	i;

	*str = (void *)malloc(nmemb * size);
	if (str == 0)
		return (0);
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

//calloc() function allocates memory for an array of nmemb elements of size
//bytes each and returns a pointer to the allocated memory.  The memory is 
//set to zero.  If nmemb or size is 0, then calloc() returns either NULL, 
//or a unique pointer value that can later be successfully passed to free().
//calloc() function returns a pointer to the allocated memory, which is 
//suitably aligned for any built-in type.  On error, these functions  re‐
//turn  NULL.   NULL  may also be returned by a successful call to calloc()
//with nmemb or size equal to zero.