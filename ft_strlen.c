/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:11:31 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/27 09:36:31 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
// void ft_putchar(char c)
// {
//     write(1,&c,1);
// }
// void ft_putnbr(int nb)
// {
//     ft_putchar(nb + '0');
// }
// int main(void)
// {
//     char c[] = "abcd";
//     int p = ft_strlen(c);
//     ft_putnbr(p);

// }