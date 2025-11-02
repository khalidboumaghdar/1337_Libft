/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:09:45 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/01 17:15:47 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*t_list_v;

	t_list_v = (t_list *)malloc(sizeof(t_list));
	t_list_v->content = content;
	t_list_v->next = NULL;
	return (t_list_v);
}

// int main()
// {
//     int x = 60;
//     // t_list *premier  = ft_lstnew(&x);

//  printf("Content = %d\n ",sizeof(t_list));
// }
