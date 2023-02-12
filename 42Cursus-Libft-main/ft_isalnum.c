#include <stdio.h>

int ft_isalnum(int c) 
{
    if (ft_isalpha(c) || ft_isdigit(c)) // eğer c, alfabetik karakterse veya dijital karakterse 1 değilse sıfır döndürüyoruz
        return (1);
    else
        return (0);
}

int main()
{
    char c = 'A';
    printf("%d", ft_isalnum(c));
    return (0);
}
