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
countchar:
Bu fonksiyon, bir dizedeki belirli bir karakteri sayar.
İlk olarak, "delimit" değişkeni değerine göre, karakteri bulunana kadar dizi üzerinde gezilir ve bulduğu karakter sayısı döndürülür. Eğer delimit 0 ise, karakter bulunana kadar aynı karakteri bulunana kadar gezilir ve bulduğu karakter sayısı döndürülür.

countword:
Bu fonksiyon, bir metin dizesindeki kelime sayısını hesaplar.
İlk olarak, metin dizesindeki ayraç karakteri bulunana kadar gezilir. Daha sonra, metin dizesindeki kelime bulunana kadar gezilir ve kelime sayısı arttırılır. Sonra aynı ayraç karakteri bulunana kadar gezilir ve tekrar kelime bulunana kadar gezilir.

ft_split:
Bu fonksiyon, verilen metin dizesini belirli bir ayraç karakteri kullanarak parçalara ayırır.
İlk olarak, metin dizesi null ise null döndürür.
Sonra, countword fonksiyonu ile metin dizesindeki kelime sayısı hesaplanır ve bunun için gereken yer ayarlanır.
Daha sonra, i değişkeni 0 ile başlatılır ve kelime sayısı kadar devam edilir. Her seferinde, countchar fonksiyonu ile ayraç karakteri bulunana kadar gezilir ve ft_substr fonksiyonu ile kelime parçası dizi içine kaydedilir.
Sonunda, dizinin son elemanı null olarak ayarlanır ve dizi döndürülür.
*/
