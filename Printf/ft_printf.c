/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:43:42 by martavar          #+#    #+#             */
/*   Updated: 2022/11/20 15:57:06 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int	ft_putnbr_base(long int nbr, char *base)
{
	if (nbr < 0)
		return (ft_putchar('-') + ft_putnbr_base(nbr * -1, base));
	if (nbr < (int)ft_strlen(base))
		return (ft_putchar(base[nbr]));
	else
		return (ft_putnbr_base(nbr / ft_strlen(base), base)
			+ ft_putchar(base[nbr % ft_strlen(base)]));
	return (0);
}

int	ft_format(char str, va_list args)
{
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (str == 'p')
		return (ft_putpointer(args));
	if (str == 'd' || str == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789"));
	if (str == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	if (str == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	if (str == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	if (str == '%')
		return (ft_putchar(str));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	len = 0;
	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len = len + ft_format(str[i + 1], args);
			i += 2;
		}
		else
			len += ft_putchar(str[i++]);
	}
	va_end(args);
	return (len);
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
