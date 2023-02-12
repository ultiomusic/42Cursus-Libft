/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:26 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/12 17:51:05 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	bas;
	size_t	son;

	if (!s1 || !set)
		return (NULL);
	bas = 0;
	while (ft_strchr(set, s1[bas]) && s1[bas] != '\0')
		bas++;
	son = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[son]) && son != 0)
		son--;
	if ((int)(son - bas + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, bas, (son - bas + 1)));
}
