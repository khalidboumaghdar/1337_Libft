/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:49:21 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/14 14:49:24 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isprint(int c)
{
   if(c >= 32 && c <= 128)
   {
    return (1);
   }
   else
   {
    return (0);
   }
}
void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_putnbr(int nb)
{
    ft_putchar(nb + '0');
}
int main(void)
{
    int x  = ft_isprint('\n');
    ft_putnbr(x);
}