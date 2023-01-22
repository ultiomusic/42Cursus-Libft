#include <stdio.h>

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
	char dst[100] = "libc is";
	char src[100] = "the standart library";

	ft_memcpy(dst, src, sizeof(src));
	printf("%s", dst);
	return (0);
}
*/