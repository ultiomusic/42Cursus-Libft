/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:47 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 14:50:47 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (count * size < count)
		return (NULL);
	result = malloc(size * count);
	if (!result)
		return (0);
	ft_bzero(result, size * count);
	return (result);
}
