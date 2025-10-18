/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:00:40 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/14 11:00:53 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isalpha(char c)
{
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' )
    {
        return  (1);
    }
    else{
        return (0);
    }
}

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_ptnbr(int x)
{
    if(x == -2147483648 )
    {
        write(1,"-2147483648",11);
    }
    else if(x < 0)
    {
        ft_putchar('-');
        x = -x;
        ft_ptnbr(x);
    }
    else if(x  > 9)
    {
        ft_ptnbr(x / 10);
        ft_ptnbr(x % 10);
    }
    else{
        ft_putchar(x +'0');
    }
}
int main(void)
{
 //int x = ft_isalpha('A');
//ft_ptnbr(x);
//write(1,"\n",1);     
}
