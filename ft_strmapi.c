/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:05:40 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/29 19:11:01 by bkhalid          ###   ########.fr       */
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
// static char	ft_to_uper(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && c >= 'a' && c <= 'z')
// 	{
// 		c -= 32;
// 	}
// 	return (c);
// }
// int main(void)
// {
//     char *res;

//     // Test 1: hello
//     res = ft_strmapi("hello", ft_to_uper);
//     if (res)
//     {
//         printf("Test1: %s\n", res); // Expected: HeLlO
//         free(res);
//     }

//     // Test 2: world
//     res = ft_strmapi("world", ft_to_uper);
//     if (res)
//     {
//         printf("Test2: %s\n", res); // Expected: WoRlD
//         free(res);
//     }

//     // Test 3: empty string
//     res = ft_strmapi("", ft_to_uper);
//     if (res)
//     {
//         printf("Test3: \"%s\"\n", res); // Expected: ""
//         free(res);
//     }

//     // Test 4: mix letters
//     res = ft_strmapi("abcXYZ", ft_to_uper);
//     if (res)
//     {
//         printf("Test4: %s\n", res); // Expected: AbCXYZ
//         free(res);
//     }

//     // Test 5: string with numbers
//     res = ft_strmapi("a1b2c3", ft_to_uper);
//     if (res)
//     {
//         printf("Test5: %s\n", res); // Expected: A1B2C3
//         free(res);
//     }

//     return (0);
// }