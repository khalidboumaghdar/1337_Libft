/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:25:47 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/30 18:30:15 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_to_uper(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			len;
	unsigned int	i;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char str1[] = "hello world!";
// 	char str2[] = "42Network";

// 	printf("Before: %s\n", str1);
// 	ft_striteri(str1, ft_to_uper);
// 	printf("After : %s\n\n", str1);

// 	printf("Before: %s\n", str2);
// 	ft_striteri(str2, ft_to_uper);
// 	printf("After : %s\n", str2);

// 	return (0);
// }