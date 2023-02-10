#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    int k;

    i = 0;
    k = -1;
    while(s[i] != '\0')
    {
        if (s[i] == c)
            k = i;
        i++;
    }
    if (c == '\0')
        return ((char *)&s[i]);
    if (k == -1)
        return (0);
    return((char*)&s[k]);
}
/*
int main()
{
    const char str[] = "greencodia game studio";
    const char ch = 'g';
    printf("%s", ft_strrchr(str, ch));
    return (0);
}
*/