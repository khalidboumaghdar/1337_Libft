/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:10:17 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/29 10:24:14 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;
	int		len_s;

	len_s = ft_strlen(s);
	p = malloc(len_s + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
//     char x1[] = "khalid boumagh";
//     char *x = strdup(x1);
//     printf("%s \n",x);
// }