#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i; // nesnenin boyutunu tutan int i yi tanımlıyoruz.

    i = 0; // i yi 0 olarak atayıp 0 dan başlatıyoruz.
    while(str[i] != '\0') // stringimiz i'inci karakteri NULL'a eşit olmadığı sürece 
    i++; // i yi arttırıyoruz.
    return (i); // ve i döndürüyoruz ki bize uzunluğunu göstersin
}
/*
int main ()
{
    char str[] = "ya sabir ya rab";
    printf("%zu", ft_strlen(str));
    return (0);
}
*/