/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:05:32 by martavar          #+#    #+#             */
/*   Updated: 2023/02/18 19:54:23 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create two lists

// Verify the input, if it has any invalid character

// Do a normal swap and see if all the movements work

// After all that works well, I can think about the logic

#include <push_swap.h>


void	clean_stack(t_stk	**s)
{
	t_stk	*tmp;

	if (*s)
	{
		while (*s)
		{
			tmp = (*s)->next;
			free(*s);
			*s = NULL;
			(*s) = tmp;
		}
		free(*s);
		*s = NULL;
	}
}

t_stk	*create_new_node(int nb)
{
	t_stk *s;

	s = malloc(sizeof(t_stk));
	if (!s)
		return (0);
	s->nbr = nb;
	s->next = NULL;
	return (s);
}

int	main(int argc, char **argv)
{
	t_stk	*stk_a;
	t_stk	*begin;
	//t_stk *stk_b;

	stk_a = NULL;
	begin = NULL;
	int	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			stk_a = create_new_node(ft_atoi(argv[i]));
			stk_a->next = begin;
			begin = stk_a;
			i++;
		}
		while (begin)
		{
			printf("%d\n", begin->nbr);
			begin = begin->next;
		}
	}
	clean_stack(&stk_a);
}
