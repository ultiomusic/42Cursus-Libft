#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    if (n == 0)
        return (0);
    n = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        if (i < (n - 1))
            i++;
        else
        return (0);
    }
    return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
int main()
{
    char str1[] = "greencodia";
    char str2[] = "greencodia";
    if ( ft_strncmp(str1,str2, 3) < 0)
    {
        printf("str1 is less than str2\n");
    }  
    else if (ft_strncmp(str1,str2, 3) > 0)
    {
        printf("str2 is less than str1\n");
    }
    else
        printf("str1 is equal to st2\n");
    printf("%d", ft_strncmp(str1,str2, 3));
    return (0);
}