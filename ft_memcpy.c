void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	const char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (0);
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
int main()
{
    char a[6] = "serkan";
    ft_memcpy(a+1, a, 4);
    printf("%s", a);
	return (0);
}
*/