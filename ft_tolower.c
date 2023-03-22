/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:21 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 05:32:41 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// tolower -> verilen karakter büyük ise küçük yapar.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
int main()
{
	printf("%c", ft_tolower('A'));
}
*/