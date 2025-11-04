/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:17:53 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/04 16:22:27 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
        *lst = ft_lstlast(*lst);
         new ->next = *lst;
        *lst = new;
}

// int main()
// {
//     t_list *head = ft_lstnew("test1");
//     t_list *node1 = ft_lstnew("node 1");
//     ft_lstadd_back(&head,node1);
//     printf("%s",(char *)head->content);
// }