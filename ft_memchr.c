/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:56:02 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/27 17:06:46 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;
	size_t			i;

	x = (unsigned char *)s;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
		{
			return ((void *)&x[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char c[] = "khalid";
//     unsigned char *x = ft_memchr(NULL,'k',5);
//     printf("%s \n",x);
// }