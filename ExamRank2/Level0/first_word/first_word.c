/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:14:22 by martavar          #+#    #+#             */
/*   Updated: 2023/01/04 10:57:34 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\f' || argv[1][i] == '\n' 
			|| argv[1][i] == '\r' || argv[1][i] == '\t' || argv[1][i] == '\v')
				i++;
		while (argv[1][i])
		{
			if (!(argv[1][i] == ' ' || argv[1][i] == '\f' || argv[1][i] == '\n' 
			|| argv[1][i] == '\r' || argv[1][i] == '\t' || argv[1][i] == '\v'))
			write(1, &argv[1][i], 1);
	
			if (argv[1][i] == ' ' || argv[1][i] == '\f' || argv[1][i] == '\n' 
			|| argv[1][i] == '\r' || argv[1][i] == '\t' || argv[1][i] == '\v')
				break ;
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
