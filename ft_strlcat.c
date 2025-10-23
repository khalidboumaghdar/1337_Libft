/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:59:06 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/22 19:41:32 by bkhalid          ###   ########.fr       */
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
    if(!dst && size == 0)
            return (len_src);
    if(len_dest <= size)
          return (len_src + size);
    while (src[i]  && (len_dest + i  < size -1))
    {
        dst[len_dest + i] = src[i];
        i++;
    }
    dst[len_dest + i] = '\0';

    return (len_dest + len_src);
}

int main(void)
{
    char dest[]= "oussama";
    char src[] = "issfoulaaaaaa";
    size_t x = ft_strlcat(dest,src,9);
//  int len_dest = ft_strlen(dest);
//  int len_src = ft_strlen(src);
//  printf("dest = %d \n src = %d \n",len_dest,len_src);

    printf("%d\n",x); 
    printf("%s\n",dest);   
  
}