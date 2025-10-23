/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:51:22 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/20 18:40:41 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
   int i;
   int sign;
   int res;
   res = 0;
   i = 0 ;
   sign = 1;

   while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
   {
        i++;        
   }
   if (nptr[i] == '+' || nptr[i] == '-')
   {
        if (nptr[i] == '-')
            sign = -sign;
        i++;
   }
   
   while (nptr[i] >= '0' && nptr[i] <= '9')
   {
        res = res * 10 + (nptr[i] -'0');
        i++;
   }
   return (res * sign) ;    
}

int main(void)
{
    char c[] = "+214748364";
    printf("%d\n",ft_atoi(c));
    printf("%d\n",atoi(c));
        
}