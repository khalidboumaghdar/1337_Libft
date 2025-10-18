/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcapy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:41:30 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/16 18:41:36 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i  = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len_src;
    i = 0;
    len_src = ft_strlen(src);
    while (src[i]!= '\0' && i < size - 1  )
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len_src);
}
#include <string.h>
int main(void)
{
    char dest[100] = "yyyjjjjjjjjjjjjjjjyyyyyyyy";
    char src[10] = "khalidgh";

   size_t x = strlcpy(dest,src,6);
    printf("%d\n" , x);
}