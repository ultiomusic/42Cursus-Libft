/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:19 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/14 15:24:22 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}
/*
#include <stdio.h>
int main()
{
	char dst[50] = "serkan";
	char src[50] = "yusuf kamil";
	printf("%s", ft_memcpy(dst, src, 5));
	return (0);
}
*/