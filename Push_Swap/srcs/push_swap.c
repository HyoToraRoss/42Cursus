/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:05:32 by martavar          #+#    #+#             */
/*   Updated: 2023/09/25 20:07:04 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create two lists

// Verify the input, if it has any invalid character

// Do a normal swap and see if all the movements work

// After all that works well, I can think about the logic

#include "../includes/push_swap.h"

void	free_and_exit(int *numbers_in_a, int *numbers_in_b)
{
	free(numbers_in_a);
	free(numbers_in_b);
	exit(0);
}

void	free_and_exit_without_errors(int *numbers_in_a, int *numbers_in_b)
{
	free(numbers_in_a);
	free(numbers_in_b);
	write(1, "Error\n", 6);
	exit(0);
}

void	check_parameters(int argc, char **argv, int *numbers_in_a, int *numbers_in_b)
{
	int					i;
	long unsigned int	j;

	i = 1;
	j = 0;
	if (argc < 2)
		free_and_exit(numbers_in_a, numbers_in_b);
	while (i < argc)
	{
		if ((argv[i][ft_strlen(argv[i] - 1)] == ' ') || (argv[i][0] == ' '))
			free_and_exit_without_errors(numbers_in_a, numbers_in_b);
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (((argv[i][j] < 48) || (argv[i][j] > 57)) && (argv[i][j] != 32))
			{
				if (argv[i][j] != 45)
					free_and_exit_without_errors(numbers_in_a, numbers_in_b);
			}
			if ((argv[i][j] == 32) && (argv[i][j + 1] == 32))
				free_and_exit_without_errors(numbers_in_a, numbers_in_b);
			j++;
		}
		i++;
	}
}

void	set_numbers(int *numbers_in_a, int *numbers_in_b, int argc)
{
	numbers_in_a[0] = argc - 1;
	numbers_in_a[1] = numbers_in_a[0];
	*numbers_in_b = 0;
}

int	main(int argc, char **argv)
{
	long	*stack_a;
	long	*stack_b;
	int		*numbers_in_a;
	int		*numbers_in_b;

	numbers_in_a = (int *)malloc(2 * sizeof(int));
	numbers_in_b = (int *)malloc(sizeof(int));
	check_parameters(argc, argv, numbers_in_a, numbers_in_b);
	set_numbers(numbers_in_a, numbers_in_b, argc);	
	stack_a = (long *)malloc(sizeof(long) * stack_size(argc));
	stack_b = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	if ((separating_input_numbers(stack_a, numbers_in_a, argv) == -1) 
		|| (is_stack_sorted(stack_a, numbers_in_a) == 0))
		free_stacks(stack_a, stack_b, numbers_in_a, numbers_in_b);
	if ((numbers_in_a[1] == 2) && (stack_a[0] > stack_a[1]))
		rotate_stack_a(stack_a, numbers_in_a);
	else if (numbers_in_a[1] == 3)
		sort_3_numbers(stack_a, numbers_in_a);
	else if (numbers_in_a[1] == 5)
		sort_5_numbers(stack_a, stack_b, numbers_in_a, numbers_in_b);
	else
		sort_more_than_5(stack_a, stack_b, numbers_in_a, numbers_in_b);
	free_stacks(stack_a, stack_b, numbers_in_a, numbers_in_b);
	return (0);
}
