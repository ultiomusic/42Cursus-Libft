#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	return ft_memcpy(dst, src, len);
}
/*
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
*/
/*
int main()
{
char dst[100] = "libc is";
char src[100] = "the standart library";
ft_memmove(dst, src, 6);	
printf("%s", dst);
return(0);
}
*/