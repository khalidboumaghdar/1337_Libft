/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:30:59 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/22 12:38:42 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


char *ft_strnstr(const char *big, const char *little, size_t len)
{
    
    size_t i;
    size_t j;
   
    i = 0;
    if (!little)
    {
        return (char *)big;
    }
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        
        while (i + j < len && (big[i + j] == little[j]))
        {
            j++;
            if (little[j] == '\0')
            {
                return (char *) &big[i];
                // return (char *) big + i ; 
            }  
        }       
        i++;
    }
    return (NULL);
}

int main(void)
{
    char *big = "My name is khalid boumaghdar";
    char *lettle = "djdgj";
    char *x = strnstr(big,lettle,19);
    printf("%s\n",x);    
}