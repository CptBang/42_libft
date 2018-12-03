/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:37:25 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 11:22:56 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new_link;

	new_link = (t_list*)malloc(sizeof(t_list));
	if (new_link == NULL)
		return (NULL);
	if (content == 0)
	{
		new_link->content = 0;
		new_link->content_size = 0;
		new_link->next = 0;
		return (new_link);
	}
	new_link->content = ft_memalloc(content_size);
	new_link->content = ft_memcpy(new_link->content, content, content_size);
	new_link->content_size = content_size;
	new_link->next = 0;
	return (new_link);
}
