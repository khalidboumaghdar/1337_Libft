/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:56:02 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/20 18:52:59 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *x = (unsigned char *) s;
    size_t i;
    i = 0;
    if(!s)
        return (NULL);
    while ( i < n)
    {
        if(x[i] == (unsigned char)c)
        {
            return (void *)&x[i];
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char c[] = "khalid";
    unsigned char *x = ft_memchr(NULL,'k',5);    
    printf("%s \n",x);
}