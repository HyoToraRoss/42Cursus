#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;

		while (argv[1][i])
		{			
			while (argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13))
				i++;
			while (argv[1][i] > 32 && argv[1][i] < 127)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			while (argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13))
			{
				if (argv[1][i + 1] > 32 && argv[1][i + 1] < 127)
					write(1, "   ", 3);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}