#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int x = 0;

	while (s2[x])
	{
		s1[x] = s2[x];
		x++;
	}
	s1[x] = "\n";
	return (s1);
}
