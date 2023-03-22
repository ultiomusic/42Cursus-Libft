/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:24 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 14:58:51 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//substr -> verilen dizinin başlangıç indexinden başlayıp verilen uzunluk kadar gider.

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		k;

	i = start;
	k = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i <= ft_strlen(s) && len > k)
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *str = "greencodia game studio";
	printf("%s", ft_substr(str, 4, 5));
}
*/