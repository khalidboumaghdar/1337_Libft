/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:40:16 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/29 11:50:15 by bkhalid          ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	p = ft_malloc(end - start);
	if (!p)
		return (NULL);
	i = 0;
	while (i < (end - start))
	{
		p[i] = s1[start + i];
		i++;
	}
	p[end - start] = '\0';
	return (p);
}
// int main()
// {
//     char t[] = " ------";

//     char set[] = " -";

//     char *p = ft_strtrim(t,set);

//     printf("%s \n",p);
// }
