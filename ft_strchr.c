#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && c != *s) // const char s'imiz NULL'a eşit olmadığı sürece ve c const char s'e esşit olmadığı sürece;
        s++;                      // s'i arttrıyoruz.
    if (c == *s)                  // eğer  c ve s birbirine eşitse; 
        return ((char *)s);       // const char ı mızı char e çevirip döndürüyoruz. Const char kendi başına döndürülemez.
    return (0);                   // eğer if e girmezse de sıfır döndürüyoruz.
}
int main()
{
    const char str[] = "greencodia game studio";
    const char ch = 'a';
    printf("%s", ft_strchr(str, ch));
    return (0);
}