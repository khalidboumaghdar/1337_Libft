/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:09:37 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/04 12:07:25 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
int main(){
    t_list *head = ft_lstnew("test");
    t_list *node1 = ft_lstnew("test1");
    t_list *head2 = ft_lstnew("test2");
	head->next = node1;
	node1->next = head2;

	    int x = ft_lstsize(head);
        printf("%d \n",x);

}