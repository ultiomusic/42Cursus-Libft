/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:13 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/18 13:36:00 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
