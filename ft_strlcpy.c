#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    size_t i;

    srcsize = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        while (src[i] && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return(srcsize);
}
int main()
{
    char a1[]= "serkan";
    char a2[] = "yusuf kamil";
 
    printf("%zu", ft_strlcpy(a2, a1, 4));
    printf("\n%s", a2);
}