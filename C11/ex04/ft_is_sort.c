int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	c;
	int	sorted;

	sorted = 1;
	c = 0;
	while(c < length - 1)
	{
		if(f(tab[c],tab[c + 1]) < 0)
			sorted = 0;
		c++;
	}
	if(!sorted)
	{
		c = 0;
		while(c < length - 1)
		{
			if((*f)(tab[c], tab[c + 1]) > 0)
				return (0);
			c++;
		}
	}
	return (1);
}
