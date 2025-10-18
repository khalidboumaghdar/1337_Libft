/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:40:10 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/15 18:40:12 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char *x = dest;
    unsigned char *y = (unsigned char *) src;

    if(x < y)
    {
        i = 0;
        while (i < n)
        {
            x[i] = y[i];
            i++;       
        }
    }
    else if (x > y)
    {
         i = n - 1 ;
        while (i >= 0)
        {
            x[i] = y[i];     
            i--;
        } 
    }
}

int main(void)
{
    char str[20] = "abcdefhhhhh";
    // char *str2 = str1+3;
    // ft_memmove(str +  2, str, 10);
    memmove(str + 2, str, 10);
    // memmove(str + 3, str, 6);
    printf("%s\n", str);
    return (0);
}
