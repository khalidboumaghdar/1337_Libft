/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:44:22 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/18 11:44:24 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>



char *ft_strrchr(const char *s, int c)
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return (char *) s + i;
        }
        i++;
    }
    
}
int main(void)
{
     char str[] = "khalidl";
    char *p = ft_strrchr(str,'l');
    printf("%c \n",*p );

}