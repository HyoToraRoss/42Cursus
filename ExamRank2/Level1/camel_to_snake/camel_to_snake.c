#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			int flag = 0;
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] += 32;
				flag = 1;
			}
			if (flag)
				write(1, "_", 1);
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
