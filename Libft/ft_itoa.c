/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:39:19 by martavar          #+#    #+#             */
/*   Updated: 2022/11/09 22:30:41 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(int n)
{
	int	i;

	i = 0;
	while (0 < n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		len;

	len = nbr_len(n);
	nbr = malloc(sizeof(char *) * (len + 2));
	if (!nbr)
		return (NULL);
	if (n == 0)
		nbr[0] = '0';
	while (0 < len)
	{
		if (n < 0)
		{
			nbr[0] = '-';
			n *= -1;
			len += 1;
		}
		if (n > 0)
		{
			n /= 10;
			nbr[len] = n % 10 + '0';
			len--;
		}
	}
	nbr[len + 1] = '\0';
	return (nbr);
}
