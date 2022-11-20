/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:03:26 by martavar          #+#    #+#             */
/*   Updated: 2022/11/20 16:04:38 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(va_list args)
{
	unsigned long int	p;

	p = va_arg(args, unsigned long int);
	if (!p)
		return (ft_putstr("(nil)"));
	else
		return (ft_putstr("0x") + ft_putpointer_base(p, "0123456789abcdef"));
}

int	ft_putpointer_base(unsigned long int p, char *base)
{
	if (p < ft_strlen(base))
		return (ft_putchar(base[p]));
	else
		return (ft_putpointer_base(p / ft_strlen(base), base)
			+ ft_putchar(base[p % ft_strlen(base)]));
	return (0);
}

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
