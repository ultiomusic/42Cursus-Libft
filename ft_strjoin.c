/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:50 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 14:49:50 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ccat;
	int		s1len;
	int		s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	ccat = (char *)malloc((s1len + s2len + 1) * sizeof(char));
	if (ccat == NULL)
		return (NULL);
	ft_strlcpy(&ccat[0], s1, s1len + 1);
	ft_strlcpy(&ccat[s1len], s2, s2len + 1);
	return (ccat);
}
