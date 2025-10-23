/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:04:51 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/23 17:29:13 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    char *p;
    size_t i ;
    
    p = malloc(nmemb * size);

    if (!p || nmemb == 0 || size == 0)
    {
        return (NULL);
    }
    i = 0;

    while (i < nmemb * size)
    {
         p[i] = 0;
         i++;           
    }
    return (p);
}
int main()
{
    int *p;
    size_t x = sizeof(int);
    p = ft_calloc(0, 0);
    printf("%s",p);
    // *(p + 0) = 1;
    // *(p + 1) = 2;
    // *(p + 2) = 3;
    // *(p + 3) = 4;
    // printf("%d",*(p + 0));
    // printf("%d",*(p + 1));
    // printf("%d",*(p + 2));
    // printf("%d",*(p + 3));
    // size_t ls = __SIZE_MAX__  ;
    // printf("%u", ls);
    printf("\n");
    free(p);    
}