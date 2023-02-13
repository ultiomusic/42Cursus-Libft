/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:02 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 15:27:17 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd;

	fd = open("deneme2.txt", O_RDWR | O_CREAT, 777);
	ft_putstr_fd("str", fd);
	printf("%d", fd);
}
*/