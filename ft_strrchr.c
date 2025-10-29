/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:44:22 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/27 10:01:38 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)s + len_s);
	}
	while (len_s > 0)
	{
		len_s--;
		if (s[len_s] == (char)c)
		{
			return ((char *)s + len_s);
		}
	}
	return (NULL);
}
// int main(void)
// {
//      char str[] = "khalidl";
//     char *p = ft_strrchr(str,'\0');
//     printf("%c \n",*p );

// }