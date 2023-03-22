/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:14:04 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 17:14:04 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memcmp -> verilen iki dizide belirlenen uzunluğun içinde iki dizi arasındaki farkı bulur.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(str1 + i) != *(str2 + i))
			return (*(str1 + i) - *(str2 + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char *s1 = "istanbul";
	char *s2 = "istAnbul";
	printf("%d", ft_memcmp(s1, s2, 5));
}
*/