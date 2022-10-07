/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:50:43 by martavar          #+#    #+#             */
/*   Updated: 2022/10/07 22:30:59 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 0177)
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

char chars[] = {'A', 0x80, 'Z'};

#define SIZE sizeof( chars ) / sizeof( char )

void main()
  {
    int   i;

    for( i = 0; i < SIZE; i++ ) {
      printf( "Char %c is %san ASCII character\n",
        chars[i],
        ( isascii( chars[i] ) ) ? "" : "not " );
    }
  }