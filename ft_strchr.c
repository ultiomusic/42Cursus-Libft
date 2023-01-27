#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && c != *s)
        s++;
    if (c == *s)
        return ((char *)s);
    return (0);
}
int main()
{
    const char str[] = "greencodia game studio";
    const char ch = 'a';
    printf("%s", ft_strchr(str, ch));
    return (0);
}