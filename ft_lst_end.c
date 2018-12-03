/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:01:44 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 15:03:21 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_end(t_list *begin_list, void *data)
{
	t_list	*current;

	current = begin_list;
	while (current->next != 0)
	{
		current = current->next;
	}
	current->next = ft_create_elem(data);
}
