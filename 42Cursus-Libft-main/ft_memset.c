#include <stdio.h>

void *ft_memset(void *b, int c, size_t len) //void pointerın kullanılma işlemleri sırasında tpini belli etmemiz gerekiyor
{
    char *str; // char pointer olan bir string tanımlıyoruz.
    size_t i; // uzunluğu integer(tamsayı) tutmak için ise bir i tanımlıyoruz.

    i = 0; // i ye 0 değeri atayarak 0 dan başlatıyoruz
    str = (char *)b; // void pointer olan b'yi char pointer yapıyoruz ve str e atıyoruz.
    while (i < len) // i len den küçük olduğu sürece
    {
        str[i] = c; // stringimizin i'inci karakterini c ye atıyoruz ve i'yi arttırıyoruz.
        i++;
    }
    return (b); // ve b döndürüyoruz. b döndürüyoruz ki bize void * dan tanımladığımız char * ımız olan str i döndürsün.
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