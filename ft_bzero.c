/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:45 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 05:29:06 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// bzero -> verilen diziye verilen uzunluk kadar '0' yazdırır.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}
/*
#include <stdio.h>
int main()
{
	char *str = "greencodia";
	printf("%s", ft_bzero(str, 4));
}
*/