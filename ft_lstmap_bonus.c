/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olamrabt <olamrabt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:36:34 by olamrabt          #+#    #+#             */
/*   Updated: 2023/11/14 12:49:04 by olamrabt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



//still doeanst work >...........
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	t_list *head;

	if (!lst || !f || !del)
		return 0;
	lst = f(&lst);
	head = lst;
	while (lst->next)
	{
		temp = lst->next;
		if (lst->content)
		{
			del(&lst);
			lst = ft_lstnew(f(&lst));
		}
		lst = ft_lstnew(f(&lst));
		lst = temp;
	}
	return (head);
}
