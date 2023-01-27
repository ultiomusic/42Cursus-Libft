#include "libft.h"
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    ft_memset (s, 0, n);
}
/*
int main()
{
    char str[] = "Yasabirrrrrrr";

    ft_bzero(str + 7, 1);
    printf("%s", str);
    return (0);
}
*/