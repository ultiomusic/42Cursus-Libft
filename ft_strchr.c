/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:57 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 05:36:11 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strchr -> verilen dizinin içinde bir karakter arar, karakteri ilk gördüğü yerden sonraki kalan diziyi verir

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = c % 256;
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
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