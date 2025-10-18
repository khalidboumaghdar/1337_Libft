/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:59:06 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/18 09:59:10 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

size_t ft_strlcat(char *dst, const char *src, size_t size)
{

    size_t i;
    size_t len_dest ;
    size_t len_src;
    len_dest = ft_strlen(dst);
    len_src = ft_strlen(src);
    i = 0;
    while (src[i] != '\0' && i < size - 1)
    {
        dst[len_dest + i ] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len_dest + len_src);
}
int main(void)
{
    char dest[6]= "abc";
    char src[7] = "khalid";
   size_t x = ft_strlcat(dest,src,6);
printf("%d\n",x);

}

