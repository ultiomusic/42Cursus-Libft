/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:25:55 by beeligul          #+#    #+#             */
/*   Updated: 2023/01/23 02:16:56 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int str)
{
   if((str >= 'A' && str <= 'Z') || (str >= 'a' && <= 'z'))
   return (1);
   return (0);
}