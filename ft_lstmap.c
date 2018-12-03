/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 23:25:04 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/03 12:40:57 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;
	t_list	*begin;

	if (lst == 0)
		return (0);
	if ((node = (*f)(lst)) == 0)
		return (0);
	begin = node;
	while (lst->next != 0)
	{
		lst = lst->next;
		node->next = (*f)(lst);
		if (node->next == 0)
		{
			while (begin->next != 0)
			{
				node = begin;
				begin = (begin)->next;
				free(begin);
			}
			return (0);
		}
		node = node->next;
	}
	return (begin);
}
