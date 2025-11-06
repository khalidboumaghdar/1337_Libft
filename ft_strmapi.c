/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:05:40 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/02 11:10:10 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_p;
	size_t			len;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s) + 1;
	new_p = malloc(len);
	if (!new_p)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		new_p[i] = f(i, s[i]);
		i++;
	}
	new_p[i] = '\0';
	return (new_p);
}
