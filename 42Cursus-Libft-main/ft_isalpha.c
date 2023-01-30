/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:25:55 by beeligul          #+#    #+#             */
/*   Updated: 2023/01/27 21:35:44 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
   if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) // eğer c değerimiz büyük A ve büyük Z arasındaysa VEYA küçük a ve küçük z arasındaysa;
      return (1); // 1 döndürüyoruz.
   else // eğer arasında değilse;
      return (0); // 0 döndürüyoruz.
}