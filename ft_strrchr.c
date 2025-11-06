/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:44:22 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/01 10:06:22 by bkhalid          ###   ########.fr       */
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
