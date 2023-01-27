#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}
int main()
{
    char a[6] = "serkan";
    ft_memmove(a+1, a, 4);
    printf("%s", a);
	return (0);
}