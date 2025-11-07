/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:25:44 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/07 10:07:07 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*delete;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		delete = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = delete;
	}
	*lst = NULL;
}
