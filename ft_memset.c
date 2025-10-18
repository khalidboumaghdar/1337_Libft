/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:28:41 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/14 16:28:43 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void *ft_memset(void *str,int c,size_t n)
{
    int i;
    i = 0;
    unsigned char *x = str;
    while (i < n)
    {
        x[i] = (unsigned char)c;
        i++;
    }
}
int main(void)
{
    int x = 0;
    ft_memset(&x,170,2);
    ft_memset((char *)&x + 2, 5, 1);
    printf("ft_memset   : %d\n", x);
}
