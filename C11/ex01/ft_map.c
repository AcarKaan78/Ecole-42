#include<stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*map;
	int	c;

	c = 0;
	map = malloc(sizeof(int) * length);
	if(!map)
		return (0);
	while(c < length)
	{
		map[c] = (*f)(tab[c]);
		c++;
	}
	return (map);
}
