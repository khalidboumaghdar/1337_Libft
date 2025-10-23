/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:04:07 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/20 19:04:52 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    if(!s)
        return (NULL);
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return (char *)s + i;
        }
        i++;
    }
}

int main(void)
{
    char str[] = "khalid";
    char *p = strchr(str,'k');
    printf("%c \n",*p );
}