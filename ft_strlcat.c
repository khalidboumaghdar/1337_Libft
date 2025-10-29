/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:59:06 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/29 09:59:53 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if ((!dst && size == 0) || !src)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size)
		return (len_src + size);
	i = 0;
	while (src[i] && (len_dst + i + 1) < size)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// int main(void)
// {
//     char dest[]= "oussama";
//     char src[] = "issfoulaaaaaa";
//     size_t x = ft_strlcat(dest,src,9);
// //  int len_dest = ft_strlen(dest);
// //  int len_src = ft_strlen(src);
// //  printf("dest = %d \n src = %d \n",len_dest,len_src);

//     printf("%d\n",x);
//     printf("%s\n",dest);

// }