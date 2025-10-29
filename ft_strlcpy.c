/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:41:30 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/29 09:58:06 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <string.h>
// int main(void)
// {
//     char dest[] = "yyyjjjjjjjjjjjjjjjyyyyyyyy";
//     char src[] = "khalidgh";

//    size_t x = ft_strlcpy(dest,src,6);
//     printf("%d\n" , x);
// }