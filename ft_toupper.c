/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:18 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 05:33:11 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// toupper -> verilen karakter küçük ise büyük yapar.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z') 
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
int main()
{
	printf("%c", ft_toupper('a'));
}
*/