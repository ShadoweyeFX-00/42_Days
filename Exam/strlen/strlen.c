#include <unistd.h>

int	ft_strlen(char *str)
{
	int x = 0;

	while (str[x])
		x++;
	return (x);
}

int main (int argc, char **argv)
{
	int y = 0;
	
	while(argv[1][y])
		y++;
	return y;
}
