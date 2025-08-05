#include <unistd.h>

void	ft_printnbr(int x)
{
	if (x >= 10)
		ft_printnbr(x / 10);
	x = (x % 10 + '0');
	write(1, &x, 1);
}

int main ()
{
	int nbr = 1;

	while (nbr <= 100)
	{
		if ((nbr % 3 == 0) && (nbr % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_printnbr(nbr);
		write(1, "\n", 1);
		nbr++;
	}
	return 0;
}
