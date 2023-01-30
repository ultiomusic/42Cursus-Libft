#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) // dst = dest üstüne kopyalama yapacağımız /0 ile biten hedef karakter dizimiz
{
    size_t i; // öncelikle uzunluğu tutacak int olan bir i ve len tanımlıyoruz.
    size_t len;

    len = ft_strlen(dst) + ft_strlen(src); // len'inimizi dst in ve src nin toplamının uzunluğuna eşitliyoruz, atama yapıyoruz.
    if (dstsize <= ft_strlen(dst)) // eğer hedef dizimizin boyu dst in uzunluğundan küçük veya eşitse
        return (ft_strlen(src) + dstsize); //kaynağımızın uzunluğunu ve hedefimizin boyunu toplayıp döndürüyoruz.
    while (*dst) // pointer hedefimiz olduğu sürece hedefimizi dst i arttırıyor ve i yi 0 a eşitliyoruz.
        dst++;
    i = 0;
    while ((i < dstsize - (len - ft_strlen(src)) - 1) && src[i]) /*i dest in boyundan len in srcinin uzunluğundan çıkarılmış halinin
    1 eksiltilmiş şeklinden ve srcnin i'inci karakterinden küçük olduğu sürece */
    {
        dst[i] = src[i]; // src'nin i'inci karakterini dstin i'inci karakterine atıyoruz ve i arttırıyoruz.
        i++;
    }
    dst[i] = '\0'; // dstin i'inci karakteri sona ulaştığı için null ekliyoruz ve sonlandırıyoruz.
    return (len); // bize bunun uzunluğunu döndüreceği için len döndürüyoruz.
}
int main()
{
char s1[] = "greencodia"; // öncelikle iki tane dizi tanımlamamız gerekiyor ve iki örnek dizi tanımlıyoruz.
char s2[] = "game studio";
printf("%zu", ft_strlcat(s1, s2, 3)); 
}
/* printf fonksiyonu kullanarak ekrana yazdırıyoruz. %%zu ekrana size_t yazabilmek için kullanılır.
yukarıda yazdığımız strlcat fonksiyonunu çağırıyoruz. fonksiyonun başlığında tanımlanan dst'e s1i src'a s2i tanımlıyoruz ve dstsize için
ise herhangi bir sayı değerini giriyoruz. dst e biz 3 girdiğimiz için dstnin boyunu 3 olarak alıyor ve çıktıda srcile beraber toplayınca 
14 sayısını ekranda görüyoruz.örnek mainde dst ve src un toplamı 21 olduğu için max 21 değeri ekrana yazılır. */
