int	len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*inttostr(int n, int *f)
{
	int		leng;
	char	*str;

	leng = len(n);
	str = (char *)malloc((sizeof(char) * leng) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		*f = -1;
		str[0] = '-';
	}
	str[leng] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		f;

	f = 1;
	i = len(n);
	str = inttostr(n, &f);
	if (!str)
		return (NULL);
	if (n == 0)
	{
		*str = '0';
		return (str);
	}
	while (n)
	{
		str[--i] = '0' + f * (n % 10);
		n /= 10;
	}
	return (str);
}