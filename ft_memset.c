/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:28:41 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/27 17:07:12 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)str;
	while (i < n)
	{
		x[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
// int main(void)
// {
//     char str[] = "khalid";
// int x = 0; // 0 0 0 0
//     int i = 5;
//     int j = 6;
//     while(i >= 0)
//     {
//         ft_memset(&x, str[i], j);
//         i--;
//         j--;
//     }
//         // long x = 0;

// ft_memset(&x, 5, 2);
// ft_memset(&x , 57, 1);
// printf("%d \n",x);

//   char *p = (char *)&x;
//   printf("ft_memset   : %s\n", p);
// }
