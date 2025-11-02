/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:48:08 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/02 16:44:47 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print(t_list *tst)
{
	while (tst)
	{
		printf("%s", (char *)tst->content);
		tst = tst->next;
	}
}
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list *head = NULL;
	t_list *node = ft_lstnew("Node 1");
	ft_lstadd_front(&head, node);
	ft_print(head);
}