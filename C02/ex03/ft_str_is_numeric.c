int ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while(str[c])
	{
		if(!(str[c] >= '0' && str[c] <= '9'))
		{
		return (0);
		}
		c++;
	}
	return (1);
}
