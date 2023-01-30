#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i; // uzunluğu tutmak için  i yi tanımlıyoruz

    if (n == 0) // eğer n 0 a eşitse 0 döndürüyoruz.
        return (0);
    n = 0; // n i sıfır olarak atıyoruz.
    while (s1[i] == s2[i] && s1[i] != '\0') // s1in i'inci karakteri s2nin i'inci karakterine eşitse VE s1in i 'inci karakteri null a eşit olmadığı sürece
    {
        if (i < (n - 1)) // eğer i n'in bir eksiğinden küçükse i'yi arttıyoruz
            i++;
        else // eğer değilse 0 döndürüyoruz.
        return (0);
    }
    return ((unsigned char)(s1[i]) - (unsigned char)(s2[i])); /* s1in i'inci karakterinden s2nin i'inci karakterini ikisini de 
    unsigned char olarak çıkarıyoruz ve farkını döndürüoruz */ 
}
int main()
{
    char str1[] = "greencodia"; // 2 adet string giriyoruz. 
    char str2[] = "greencodia";
    if (ft_strncmp(str1,str2, 3) < 0)
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