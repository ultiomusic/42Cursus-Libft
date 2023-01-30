#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize; // bir kaynak boyutu ve ve uzunluk için i tanımlıyoruz.
    size_t i;

    srcsize = ft_strlen(src); //kaynağın uzunluğunu kaynağın boyutuna atıyoruz.
    i = 0; // i değerini de 0 dan başlatıyoruz.
    if (dstsize != 0) // eğer hedefin boyutu 0'a eşit değilse
    {
        while (src[i] && i < (dstsize - 1)) // src'nin i'ninci karakteri ve i, hedefin boyutunun 1 eksiğimnden küçük olduğu sürece
        {
            dst[i] = src[i]; // srcnin i'ci karakterini dstnin i'inci karakterine atıyoruz yani kopyalıyoruz ve i yi arttırıyoruz.
            i++;
        }
        dst[i] = '\0'; //dstin i'inci karakterine ise sona geldiğimiz için null ekliyoruz ve diziyi bitiriyoruz.
    }
    return(srcsize); // kaynağın boyutunu döndürüyoruz.
}
int main()
{
    char a1[]= "serkan"; // iki adet dst ve src olacak diziyi tanımlıyoruz.
    char a2[] = "yusuf kamil";
 
    printf("%zu", ft_strlcpy(a2, a1, 4)); /*size_t döndüreceğimiz için %zu kullanıyoruz ve fonksiyonumuzu çağiriyoruz. 
    a2yi dst ve a1 i src olarak tanımlıyoruz. girdiğimiz sayı ile beraber kaynağın uzunluğunuu gösteriyor bize */
    printf("\n%s", a2);
}