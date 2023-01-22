#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    str = (char *)b;
    while (i < len)
    {
        str[i] = c;
        i++;
    }
    return (b);
}
/*
int main()
{
    char str[100] = "Bilgisyarlarlaralralr";

    ft_memset(str, 'x', 12 * sizeof(char));
    printf("%s", str);
    return (0);
}
*/