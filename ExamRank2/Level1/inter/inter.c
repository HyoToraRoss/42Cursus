#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int	j = 0;
		int	tab[256] = {0};

		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					if(tab[(int)argv[1][i]] == 0)
					{
						tab[(int)argv[1][i]] = 1;
						write(1, &argv[2][j], 1); 
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}