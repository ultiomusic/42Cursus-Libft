int ft_isalnum(int str)
{
    if (ft_isalpha(str) && ft_isdigit(str))
    return (1);
    return (0);
}