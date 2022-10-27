/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:28:33 by martavar          #+#    #+#             */
/*   Updated: 2022/10/27 11:50:34 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	end;

	i = 0;
	result = 1;
	end = 0;
	while (nptr[i])
	{
		while (nptr[i] == ' ' && nptr[i] == '\v' && nptr[i] == '\r')
			i++;
		if (nptr[i] == '-')
			result *= -1;
		if (!('0' <= nptr[i + 1] && nptr[i + 1] <= '9'))
			return (0);
		i++;
		while ('0' <= nptr[i] && nptr[i] <= '9')
		{
		end = end * 10 + (nptr[i] - '0');
		i++;
		}
	}
	return (end * result);
}

#include <stdio.h>

int main (void)
{
	char	nptr[] = "    -7846528bjhfej";

	printf("%i\n", ft_atoi(nptr));
	printf("%i\n", atoi(nptr));
}