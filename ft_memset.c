void	*ft_memset(void *b, int c, size_t len)
{
	char *p;

	p = (char *)b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}


int main()
{
 	char str[100] = "Libc is the standard library.";

	ft_memset(str, '.', 8 * sizeof(char));
	printf("After memset(): %s\n", str);
	return 0;
}
