/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:21:59 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/28 16:09:31 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_pr(char **pr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(pr[i]);
		i++;
	}
	free(pr);
}

static char	*copy_word(char const *s, int start, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	put_words(char **pr, char const *s, char c)
{
	int	i;
	int	index;
	int	start;
	int	len;

	i = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		start = index;
		len = 0;
		while (s[index] && s[index++] != c)
			len++;
		if (len > 0)
		{
			pr[i] = copy_word(s, start, len);
			if (!pr[i])
				return (free_pr(pr, i));
			i++;
		}
	}
	pr[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**pr;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	pr = (char **)malloc((count + 1) * sizeof(char *));
	if (!pr)
		return (NULL);
	put_words(pr, s, c);
	return (pr);
}

// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	// Test 1: Empty string
// 	result = ft_split("", 'e');
// 	printf("Test 1: \"\" sep='e'\n");
// 	for (i = 0; result[i]; i++)
// 		printf("[%s]", result[i]);
// 	free_pr(result, i);
// 	// Test 2: No separator in string
// 	result = ft_split("hello", 'z');
// 	printf("\nTest 2: \"hello\" sep='z'\n");
// 	for (i = 0; result[i]; i++)
// 		printf("[%s]\n", result[i]);
// 	free_pr(result, i);
// 	// Test 3: Only separators
// 	result = ft_split("zzz", 'z');
// 	printf("\nTest 3: \"zzz\" sep='z'\n");
// 	for (i = 0; result[i]; i++)
// 		printf("[%s]\n", result[i]);
// 	free_pr(result, i);
// 	// Test 4: Separator at start, end, and middle
// 	result = ft_split("##hello##world##", '#');
// 	printf("\nTest 4: \"##hello##world##\" sep='#'\n");
// 	for (i = 0; result[i]; i++)
// 		printf("[%s]\n", result[i]);
// 	free_pr(result, i);
// 	// Test 5: Multiple consecutive separators
// 	result = ft_split("a--b---c", '-');
// 	printf("\nTest 5: \"a--b---c\" sep='-'\n");
// 	for (i = 0; result[i]; i++)
// 		printf("[%s]\n", result[i]);
// 	free_pr(result, i);
// 	// Test 6: Single character string
// 	result = ft_split("a", '-');
// 	printf("\nTest 6: \"a\" sep='-'\n");
// 	for (i = 0; result[i]; i++)
// 		printf("[%s]\n", result[i]);
// 	free_pr(result, i);
// 	// Test 7: Only separator character
// 	result = ft_split("-", '-');
// 	printf("\nTest 7: \"-\" sep='-'\n");
// 	for (i = 0; result[i]; i++)
// 		printf("[%s]\n", result[i]);
// 	free_pr(result, i);
// 	// Test 8: Comma separated
// 	result = ft_split("a,b,c", ',');
// 	printf("\nTest 8: \"a,b,c\" sep=','\n");
// 	for (i = 0; result[i]; i++)
// 		printf("[%s]\n", result[i]);
// 	free_pr(result, i);
// 	// Test 9: Complex string
// 	result = ft_split("hello-world-this-is-ft_split", '-');
// 	printf("\nTest 9: \"hello-world-this-is-ft_split\" sep='-'\n");
// 	for (i = 0; result[i]; i++)
// 		printf("[%s]\n", result[i]);
// 	free_pr(result, i);
// 	return (0);
// }
