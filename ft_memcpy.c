/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:55:13 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/15 15:55:19 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    i = 0;
    unsigned char *src1 = (unsigned char *) src;
    unsigned char *dest1 = (unsigned char *) dest; 
    while (i < n)
    {
        dest1[i] = src1[i];
        i++;
    }
}
int main(void)
{
    int  src = 145000;
    char dest[4];
    int value;
    memcpy(dest,&src,4);
    memcpy(&value, dest, 4); 
   
    printf("%d", value);

 
}