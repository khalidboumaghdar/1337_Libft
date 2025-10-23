/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:25:56 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/22 11:29:49 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    
    while (i < n)
    {
        if(s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
        {
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        }
        i++;
    }
    return (0);
}



int main(void)
{
    char s1[] = "khalid";
    char s2[] = "hk";
    int x = ft_strncmp(s1,s2,2);
    printf("%d \n",x);    
}