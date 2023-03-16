/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:27 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 15:39:26 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i = 1;
	else if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*dizi;
	int		i;

	nb = n;
	i = len(nb);
	dizi = (char *)malloc(sizeof(char) * (i + 1));
	if (!dizi)
		return (NULL);
	dizi[i--] = '\0';
	if (nb == 0)
		dizi[0] = '0';
	if (nb < 0)
	{
		dizi[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		dizi[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (dizi);
}
