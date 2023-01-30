int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9') // eğer c miz 0 ile 9 arasındaysa yani bir sayıysa 1, değilse sıfır döndürüyoruz
        return (1);
    return (0);
}