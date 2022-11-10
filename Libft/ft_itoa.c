/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:39:19 by martavar          #+#    #+#             */
/*   Updated: 2022/11/10 15:30:12 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	nbr_size(int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	unsigned int	size;

	size = nbr_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	nbr = n;
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	if (nbr == 0)
		str[0] = '0';
	str[size] = '\0';
	while (nbr != 0)
	{
		str[size - 1] = (nbr % 10) + '0';
		nbr /= 10;
		size--;
	}
	return (str);
}
