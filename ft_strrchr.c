/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:30 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 05:35:42 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strchr -> verilen dizinin içinde bir karakter arar, karakteri son gördüğü yerden sonraki kalan diziyi verir

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ch;
	int		check;

	check = 0;
	c = c % 256;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			ch = (char *)s;
			++check;
		}
		++s;
	}
	if (check > 0)
		return (ch);
	else if (c == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char *str = "greencodia game studio";
	printf("%s", ft_strchr(str, 'a'));
}
*/
