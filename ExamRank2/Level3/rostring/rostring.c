#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc <= 2)
	{

	}
	write(1, "\n", 1);
}



int main(int argc, char **argv)
{
    int i;
    int start;
    int end;
    int flag;

    if (argc > 1 && argv[1][0])
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        start = i;
        while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
            i++;
        end = i;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while(argv[1][i]) 
        {
            while ((argv[1][i] == ' ' && argv[1][i + 1] == ' ') || (argv[1][i] == '\t' && argv[1][i + 1] == '\t'))
                i++; 
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1; 
            write(1, &argv[1][i], 1);
            i++;
        }
        if (flag)
            write(1, " ", 1);
        while (start < end)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return(0);
}

//OR

int main(int ac, char **av)
{
	int i;
	int	flag_wrd;
	int flag_spc;

	i = 0;
	flag_wrd = 0;
	flag_spc = 0;
	if (ac >= 2)
	{
		while (av[1][i] > 32 && av[1][i] < 126)
			i++;
		while (av[1][i] == 32 || (av[1][i] > 9 && av[1][i] < 13))
			i++;
		while (av[1][i])
		{
			while (av[1][i] > 32 && av[1][i] < 126)
			{
				write (1, &av[1][i], 1);
				i++;
				flag_spc = 0;
				flag_wrd = 1;
			}
			while (av[1][i] == 32 || (av[1][i] > 9 && av[1][i] < 13))
			{
				if (flag_spc == 0)
				{
					write (1, " ", 1);
					flag_spc = 1;
				}
				i++;
			}
		}
		i = 0;
		if (flag_wrd == 0)
		{
			while (av[1][i])
			{
				while (av[1][i] > 32 && av[1][i] < 126)
				{
					write (1, &av[1][i], 1);
					i++;
				}
				while (av[1][i] == 32 || (av[1][i] > 9 && av[1][i] < 13))
					i++;
			}
		}
		else if (flag_wrd == 1)
		{
			write (1, " ", 1);
			while (av[1][i] == 32 || (av[1][i] > 9 && av[1][i] < 13) && flag_wrd == 1)
				i++;
			while (av[1][i] > 32 && av[1][i] < 126)
			{
				write (1, &av[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
}