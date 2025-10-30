/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:04:51 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/30 12:04:43 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}
// int main()
// {
//     int *p;
//     size_t x = sizeof(int);
//     p = ft_calloc(0, 0);
//     printf("%s",p);
//     // *(p + 0) = 1;
//     // *(p + 1) = 2;
//     // *(p + 2) = 3;
//     // *(p + 3) = 4;
//     // printf("%d",*(p + 0));
//     // printf("%d",*(p + 1));
//     // printf("%d",*(p + 2));
//     // printf("%d",*(p + 3));
//     // size_t ls = __SIZE_MAX__  ;
//     // printf("%u", ls);
//     printf("\n");
//     free(p);
// }