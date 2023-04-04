int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	c;
	int	count;

	c = 0;
	count = 0;
	while(c < length)
	{
		if(f(tab[c]))
			count++;
		c++;	
	}
	return (count);
}
