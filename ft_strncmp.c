/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:35 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/14 14:43:29 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < (n - 1)) && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
int main ()
{
	char *str1 = "abCdZf";
    char *str2 = "abcdef";
    int result;

    result = ft_strncmp(str1, str2, 3);
    if(result < 0) {
       printf("str1, str2 den küçük\n");
    } else if(result > 0) {
       printf("str2, str1 den küçük\n");
    } else {
       printf("str1 be str eşit\n");
    }
    printf("strncmp() tarafından dönen değer: %d\n", result);
    return(0);
}
*/