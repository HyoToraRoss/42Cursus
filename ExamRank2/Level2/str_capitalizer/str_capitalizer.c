#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		int i = 1;
		int j;

		while (argv[i])
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] += 32;
				if (argv[i][j] == ' ' || (argv[i][j] >= 9 && argv[i][j] <= 13))
					if (argv[i][j - 1] >= 'a' && argv[i][j - 1] <= 'z')
						argv[i][j - 1] -= 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
