/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:32 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 15:09:43 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	result = (char *)haystack;
	if (!*needle)
		return (result);
	i = 0;
	while (i < len && *(result + i))
	{
		j = 0;
		while (*(result + i + j) == *(needle + j) && i + j < len)
		{
			if (*(needle + j + 1) == '\0')
				return (result + i);
			j++;
		}
		i++;
	}
	return (0);
}
