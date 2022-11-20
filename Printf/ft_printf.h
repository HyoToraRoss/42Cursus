/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:12:33 by martavar          #+#    #+#             */
/*   Updated: 2022/11/20 15:59:22 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *args, ...);
size_t	ft_strlen(const char *c);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr_base(long int nbr, char *base);
int		ft_format(char str, va_list args);
int		ft_putpointer(va_list args);
int		ft_putpointer_base(unsigned long int p, char *base);

#endif