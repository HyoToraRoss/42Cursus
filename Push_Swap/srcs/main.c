/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:05:32 by martavar          #+#    #+#             */
/*   Updated: 2023/07/08 15:22:22 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create two lists

// Verify the input, if it has any invalid character

// Do a normal swap and see if all the movements work

// After all that works well, I can think about the logic

#include "../includes/push_swap.h"

void	check_parameters(int argc, char **argv, int *numbers_in_a, int *numbers_in_b)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc < 2)
		free_and_exit(numbers_in_a, numbers_in_b);
	while (i < argc)
	{
		if ((arvg[i][ft_strlen(argv[i]) - 1)] == ' ') || (argv[i][0] == ' '))
			free_and_exit_without_errors(numbers_in_a, numbers_in_b);
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (((argv[i][j] < 48)))
		}
	}
	
}

int	main(int argc, char **argv)
{
	long	*stack_a;
	long	*stack_b;
	int		*numbers_in_a;
	int		*numbers_in_b;

	numbers_in_stack_a = (int *)malloc(2 * sizeof(int));
	numbers_in_stack_b = (int *)malloc(sizeof(int));
	check_parameters(argc, argv, numbers_in_a, numbers_in_b);
}

