/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:48:52 by martavar          #+#    #+#             */
/*   Updated: 2022/11/03 21:44:46 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	str = malloc(nmemb * size);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
