/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:47 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/13 21:34:06 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	c = ft_strlen(dst);
	if (dstsize <= c)
		return (dstsize + ft_strlen(src));
	d = 0;
	while (src[d] && (c + d) < dstsize - 1)
	{
		dst[c + d] = src[d];
		d++;
	}
	dst[c + d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
/*
#include <stdio.h>
int main()
{
	char s1[] = "alallala";
	char s2[] = "lololo";
	printf("%zu", ft_strlcat(s1, s2, 4));
	return (0);
}
*/