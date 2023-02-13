/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:11 by beeligul          #+#    #+#             */
/*   Updated: 2023/02/11 15:29:50 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
#include <stdio.h>
int main()
{
	//int fd;
	int fd2;

	//fd = open("test4.txt", O_CREAT | O_RDWR, 777);
	fd2 = open("test.txt", O_RDWR, 777);
	//ft_putchar_fd('A', fd);
	ft_putchar_fd('2', fd2);
	//printf("%d\n", fd);
	printf("%d", fd2);
}
*/
