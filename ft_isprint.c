/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:30 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 01:25:14 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_isprint('a'));
	printf("%d", ft_isprint('9'));
	printf("%d", ft_isprint('+'));
	printf("%d", ft_isprint('\t'));
}
*/