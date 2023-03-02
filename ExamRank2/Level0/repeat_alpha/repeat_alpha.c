#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 0;
		int j = 0;

		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 'A';
				while (j-- >= 0)
					write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] - 'a';
				while (j-- >= 0)
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}