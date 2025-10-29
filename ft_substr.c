/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:06:53 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/27 11:12:37 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc(size_t len)
{
	char	*p;

	p = malloc(len + 1);
	if (!p)
	{
		return (NULL);
	}
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	if (start >= ft_strlen(s))
	{
		p = malloc(1);
		p[0] = '\0';
		return (p);
	}
	if (len > ft_strlen(&s[start]))  // H	e	l	l	o  \0 x 
		len = ft_strlen(&s[start]);
	p = ft_malloc(len);
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i++] = s[start++];
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
//     char x[] = "khalidgyt";
//     char *p = ft_substr(x,0,0);
//     printf("%s \n",p);
// }