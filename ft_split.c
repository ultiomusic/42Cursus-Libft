/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:00 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 14:50:00 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// split -> verilen dizinin içinde belirtilen ayracı bularak dizilere ayırır.

#include "libft.h"

size_t	countchar(const char *s, char c, int delimit)
{
	size_t	i;

	i = 0;
	if (delimit)
	{
		while (s[i] && s[i] != c)
			i++;
	}
	else
	{
		while (s[i] && s[i] == c)
			i++;
	}
	return (i);
}

size_t	countword(const char *str, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		word++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	word = countword(s, c);
	array = malloc((word + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (i < word)
	{
		s += countchar(s, c, 0);
		array[i] = ft_substr(s, 0, countchar(s, c, 1));
		if (!array[i])
			return (NULL);
		s += countchar(s, c, 1) + countchar(s, c, 0);
		i++;
	}
	array[i] = NULL;
	return (array);
}
/*
#include <stdio.h>
int main()
{
	char *str = "this is the string";
	char **arr = ft_split(str, ' ');
	int i;

	i = 0;
	while(arr[i])
	{
		printf("%s", arr[i]);
		i++;
	}
}
*/
