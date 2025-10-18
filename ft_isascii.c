/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:56:38 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/14 11:56:45 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
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
    int x  = ft_isascii(80);
    ft_putnbr(x);
    

}