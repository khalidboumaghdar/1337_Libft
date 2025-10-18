/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:11:31 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/14 16:11:34 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t ft_strlen(const char *s)
{
    size_t i  = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
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
    char c[] = "khalid";
    int p = ft_strlen(c);
    ft_putnbr(p);

}