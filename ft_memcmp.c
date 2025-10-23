/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:59:46 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/20 18:58:28 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
       size_t i;
       i = 0;
       unsigned char *x = (unsigned char *) s1;
       unsigned char *y = (unsigned char *) s2;
       if (!s1 || !s2)
            return (0);
       while (i < n)
       {
            if (x[i] != y[i])
            {
                return (x[i] -  y[i]);   
            }
            i++;
       }
       return (0); 
}
int main(void)
{
    char c[] = "kha";
    char s[] = "khalid";
    int x  = ft_memcmp(c,s,3);
    printf("%d\n",x);    
}