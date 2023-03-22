/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:13 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 05:27:39 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memset -> verilen diziye belirlen karakteri verilen uzunluk kadar yazdırır.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "istanbul";
	printf("%s"ft_memset(str ,'x', 4));
}
*/