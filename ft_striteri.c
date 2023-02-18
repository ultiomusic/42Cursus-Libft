/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:52 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 14:49:52 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
 void my_func(unsigned int i, char *str)
{
	 	printf("bulundugu index = %d oluşan string %s\n", i, str);
}
int main()
{
	char *str = "greencodia";
 	printf("The result is %s\n", str);
 	ft_striteri(str, my_func);
 	printf("The result is %s\n", str);
 	return 0;
}
*/
/*
#include <stdio.h>
void func(unsigned int i, char *str)
{
	printf("%c",ft_toupper(str[0]));
}
int main()
{
	
	char *str = "greencodia";
	ft_striteri(str, func);
	return(0);
}
*/
