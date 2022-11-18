/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:41:57 by martavar          #+#    #+#             */
/*   Updated: 2022/11/18 11:51:29 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int	ft_int(int num_args, ...)
{
	int	i;
	int	x;
	int	max;

	va_list args;
	va_start(args, num_args);

	i = 0;
	max = 0;
	while (i < num_args)
	{
		x = va_arg(args, int);
		if (i == 0) max = x;
		else if (x > max) max = x;
		//printf("x: %d\n", x);
		i++;
	}
	va_end(args);
	return (max);
}

void	print(char *placeholders, ...)
{
	int	num_args;
	int	i;

	num_args = strlen(placeholders);

	va_list args;
	va_start(args, placeholders);

	i = 0;
	while (i < num_args)
	{
		if (placeholders[i] == 'd')
		{
			int x = va_arg(args, int);
			printf("%d\n", x);
		}
		else if (placeholders[i] == 'f')
		{
			double x = va_arg(args, double);
			printf("%f\n", x);
		}
		i++;
	}
}

int main(void)
{
	int max_num;

	//printf("max test:\n");
	max_num = ft_int(7, 10, 15, 25, 30, 120, 11, 2);
	//printf("max: %d\n", max_num);
	max_num = ft_int(4, 20, 55, 15, 12);
	//printf("max: %d\n", max_num);

	//printf("\nprint test:\n");
	print("dddfdd", 1,2,3,5.5,-1,-2);
	print("ddfd", 4, 2, 10.5, 3);
	print("fdfdf", 1.1, 0, 2.2, 5, 3.2);

	return (0);
}
