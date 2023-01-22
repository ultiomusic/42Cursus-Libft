#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i] != '\0')
    i++;
    return (i);
}
/*
int main ()
{
    char str[] = "ya sabir ya rab";
    printf("%zu", ft_strlen(str));
    return (0);
}
*/