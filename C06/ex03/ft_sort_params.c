#include <stdio.h>
#include <unistd.h>
void	swap(char **comp1, char **comp2)
{
	char	**buffer;

	*buffer = *comp1;
	*comp1 = *comp2;
	*comp2 = *buffer;
}

int	hello(int argc, char **argv)
{
	int th;
	int	sub_th;
	int i;

	th = 1;
	while (th < (argc - 1))
	{
		sub_th = th + 1;
		while (sub_th < argc)
		{
			i = 0;
			while (argv[sub_th][i] == argv[th][i])
			{
				if (argv[sub_th][i] == '\0')
				{
					break ;
				}
				i++;
			}
			if (argv[sub_th][i] < argv[th][i])
			{
				printf(""); //if don't have this line it'll bug
				swap(&argv[sub_th], &argv[th]);
			}
			sub_th++;
		}
		th++;
	}
	return (0);
}

int	main(void)
{	char *opto[] = {"a.exe","1", "2", "3", "00005", "4"};
	
	printf("opto initied: ");for (int i = 1; i < 6; i++)
	{
		printf("%s\t", opto[i]);
	}
	hello(6, opto);

	printf("\nopto sorted: ");
	for (int i = 1; i < 6; i++)
	{
		printf("%s\t", opto[i]);
	}
}