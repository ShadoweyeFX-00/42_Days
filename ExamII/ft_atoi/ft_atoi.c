#include <stdio.h>

int	ft_atoi(char *str)
{
	int	x = 0;
	int	res = 0;
	int	sign = 1;

	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\v'
		|| str[x] == '\f' || str[x] == '\r' || str[x] == '\n')
		x++;
	if (str[x] == '-' || str[x] == '+')
		if (str[x++] == '-')
			sign *= -1;
	while (str[x] >= '0' && str[x] <='9')
		res = res * 10 + (str[x++] - '0') * sign;
	return (res);
}

int main ()
{
	printf("%d\n", ft_atoi("        ------21331jkhf"));
}
