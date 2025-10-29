/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:40:10 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/27 17:07:07 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)dest;
	y = (unsigned char *)src;
	if (x < y)
	{
		i = 0;
		while (i < n)
		{
			x[i] = y[i];
			i++;
		}
	}
	else if (x > y)
	{
		i = n;
		while (i > 0)
		{
			i--;
			x[i] = y[i];
		}
	}
	return (dest);
}

// int main(void)
// {
//     char str[20] = "abcdefhhhhh";
//     // char *str2 = str1+3;
//     // ft_memmove(str +  2, str, 10);
//     memmove(str + 2, str, 10);
//     // memmove(str + 3, str, 6);
//     printf("%s\n", str);
//     return (0);
// }
