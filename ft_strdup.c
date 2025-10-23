/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:10:17 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/23 17:13:26 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
size_t ft_strlen(const char *s)
{
    size_t i  = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}
char *ft_strdup(const char *s)
{
    char *p = malloc(sizeof(s));
    
    int i;
     i = 0;
     int len_s = ft_strlen(s);
     while (s[i] != '\0' || i < len_s )
     {
        *(p + i) = s[i];
        i++;
     }
     p[i] = '\0';
     return (p);
     free(p);
     
}

int main()
{
    char x1[] = "khalid boumagh";
    char *x = ft_strdup(x1);
    printf("%s \n",x);
}