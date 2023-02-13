/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:09 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 15:29:18 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			ft_putchar_fd (*s, fd);
			s++;
		}
		ft_putchar_fd ('\n', fd);
	}
}

/*
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd;
	char *str = "Life is good";
	fd = open("test4.txt", O_RDWR);

	ft_putendl_fd(str, fd);
	return (0);
}
*/