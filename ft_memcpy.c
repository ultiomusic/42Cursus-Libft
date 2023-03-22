/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:19 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 05:36:30 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memcpy -> verilen dizileri birbirine belirlenen uzunluk kadar kopyalar.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if ((!dst && !src) || !len)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (len--)
		*d++ = *s++;
	return (dst);
}/*
#include <stdio.h>
int main()
{
	char dst[] = "merhaba";
	printf("%s", ft_memcpy(dst, dst+3, 4));
}
*/