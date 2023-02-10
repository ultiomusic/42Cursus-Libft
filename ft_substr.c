char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;  
	size_t		k;

	i = start;
	k = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str || !s)
		return (NULL);
	while (i <= ft_strlen(s) && len > k)
	{
		str[k] = s[i];
		x++;
		i++;
	}
	str[k] = '\0';
	return (str);
}