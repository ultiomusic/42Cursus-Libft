/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:26 by beeligul          #+#    #+#             */
/*   Updated: 2023/03/22 05:35:30 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strtrim -> verilen dizinin içinden istenilen dizi kadar baştan ve sonran kırpar. 

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	j = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[j]) && j != 0)
		j--;
	if ((int)(j - i + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, i, (j - i + 1)));
}
/*
#include <stdio.h>
int main()
{
	char *str = "--istanbul--";
	char *set = "--i";
	printf("%s",ft_strtrim(str, set));
}
*/