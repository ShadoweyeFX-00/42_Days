#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int**range, int min, int max)
{
	int	i;

	if (max > min)
	{
		max -= min;
		*range = (int *)malloc(sizeof(int) * max);
		if (!(*range))
			return (-1);
		i = 0;
		while (i < max)
		{
			(*range)[i] = i + min;
			i++;
		}
	}
	else
	{
		*range = 0;
		return (0);
	}
	return (max);
}

int main(void)
{
	int *range;
	int len = ft_ultimate_range(&range, 3, 8);
	int i = 0;

	while (i < len)
		printf("%d ", range[i++]);
	printf("\n");
	free(range);
}
