/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:50:24 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/04 11:17:42 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int	main(void)
// {
// 	t_list *head;
// 	head = ft_lstnew("test");
// 	t_list *node;
// 	node = ft_lstnew("Node");
// 	head->next = node;
// 	t_list *ltst = ft_lstlast(head);
// 	printf("%s \n", (char *)ltst->content);
// }