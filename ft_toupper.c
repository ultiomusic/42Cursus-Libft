int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    return (c - 32);
    return (c);
}
/*
int main()
{
    char c = 'a';
    printf("%c", ft_toupper(c));
    return (0);
}
*/