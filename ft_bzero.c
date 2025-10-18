/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:26:30 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/15 15:26:32 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
     int  i;
     i = 0;
     unsigned char *x  = s;
     while (i < n)
     {
        x[i] = '\0';
        i++;    
    }
}
int main(void)
{
    char number[6] = "khalid";
    ft_bzero(number,3);
    for (int i = 0; i < 6; i++)
    printf("%d ", number[i]);
}