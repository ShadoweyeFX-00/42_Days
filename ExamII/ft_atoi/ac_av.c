#include <unistd.h>

int	main(int argc, char **argv)
{
	int x = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	 while (argv[1][x])
	 {
		 if (!(argv[1][x] == ' ' || argv[1][x] == '\t' || argv[1][x] == '\v'
				 || argv[1][x] == '\f'|| argv[1][x] == '\r'|| argv[1][x] == '\n'))
		 write(1, &argv[1][x], 1);
		 x++;
	 }
}
