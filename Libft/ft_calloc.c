/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:48:52 by martavar          #+#    #+#             */
/*   Updated: 2022/10/27 13:56:18 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	i;

	*p = malloc()
}

//calloc() function allocates memory for an array of nmemb elements of size
//bytes each and returns a pointer to the allocated memory.  The memory is 
//set to zero.  If nmemb or size is 0, then calloc() returns either NULL, 
//or a unique pointer value that can later be successfully passed to free().
//calloc() function returns a pointer to the allocated memory, which is 
//suitably aligned for any built-in type.  On error, these functions  re‐
//turn  NULL.   NULL  may also be returned by a successful call to calloc()
//with nmemb or size equal to zero.