/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:25 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 15:38:36 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memchr -> verilen dizide aranmasını istenen uzunluğun içinde verilen karakteri arar ve ilk bulduğu yeri verir.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char *str = "greencodia";
	printf("%s", ft_memchr(str, 'c', 8));
}
*/