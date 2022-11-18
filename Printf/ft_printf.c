/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:43:42 by martavar          #+#    #+#             */
/*   Updated: 2022/11/18 17:49:49 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putout(char c)
{
	if (c == 'c')
		putchar(va_arg(args, int));
	if (c == 's')
		putchar(va_arg(args, char *));
	if (c == 'p')
		putchar(va_arg(args, unsigned long));
	if (c == 'd')
		ft_atoi(va_arg(args, int));
	if (c == 'i')
		ft_atoi(va_arg(args, int));
	if (c == 'u')
		ft_atoi(va_arg(args, unsigned int));
	if (c == 'x')
		ft_atoi(va_arg(args, unsigned int));
	if (c == 'X')
		ft_atoi(va_arg(args, unsigned int));
	if (c == '%')
		ft_putchar(%);
}

int	ft_printf(const char conversions*, ...)
{
	int		i;
	int		str;
	va_list	args;

	str = ft_strlen(conversions);
	va_start(args, converions);
	i = 0;
	while (i < conversions)
	{
		if (conversions[i] == '%')
			ft_putout(conversions[i++]);
		else
			ft_putchar(conversions[i]);
		i++;
	}
	va_end(args);
	return (str);
}


/*
%c Prints a single character.
%s Prints a string (as defined by the common C convention).
%p The void * pointer argument has to be printed in hexadecimal format.
%d Prints a decimal (base 10) number.
%i Prints an integer in base 10.
%u Prints an unsigned decimal (base 10) number.
%x Prints a number in hexadecimal (base 16) lowercase format.
%X Prints a number in hexadecimal (base 16) uppercase format.
%% Prints a percent sign.
*/
