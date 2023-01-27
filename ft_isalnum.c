#include <stdio.h>
#include "libft.h"

#include <stdio.h>

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    else
        return (0);
}

int main()
{
    char c = 'A';
    printf("%c", ft_isalnum(c));
    return (0);
}
