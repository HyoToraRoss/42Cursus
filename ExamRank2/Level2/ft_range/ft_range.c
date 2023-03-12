#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     *ft_range(int start, int end)
{
	int	*array;
	int size = end - start;
	int	i = 0;

	if (size < 0)
		size *= -1;
	size++;
	array = malloc(sizeof(int) * size);
	if (!array)
		return 0;
	if (start == end)
		array[0] = start;
	if (start < end)
	{
		while (i < size)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		while (i < size)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return (array);
}

int	main(void)
{
	int *array;
	int i;
	int start = 1;
	int end = 3;
	long int size;

	i = 0;
	size = end - start;
	if (size < 0)
		size *= -1;
	size++;
	array = ft_range(start, end);
	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
}
