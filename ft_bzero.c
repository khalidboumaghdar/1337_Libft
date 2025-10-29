/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:26:30 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/27 17:00:23 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	if (!s)
		return ;
	x = s;
	while (i < n)
	{
		x[i] = '\0';
		i++;
	}
}

// int main(void)
// {
//     char number[6] = "khalid";
//     ft_bzero(NULL,3);
//     for (int i = 0; i < 6; i++)
//     printf("%c ", number[i]);
// }