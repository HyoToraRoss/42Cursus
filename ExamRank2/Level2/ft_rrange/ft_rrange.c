#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int size = end - start + 1;

	if (start > end)
		return (ft_rrange(end, start));
	range = malloc(sizeof(int) * size);
	if (range)
	{
		while (i < size)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	return (range);
}