/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:16 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 05:36:27 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memmove -> verilen dizileri birbirine belirlenen uzunluk kadar taşıyarak kopyalar.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char dst[] = "merhaba";
	printf("%s", ft_memmove(dst, dst+3, 4));
}
*/