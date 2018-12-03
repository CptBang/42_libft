/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 22:29:14 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 14:07:12 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*cpy;

	while (*alst != 0)
	{
		cpy = *alst;
		*alst = (*alst)->next;
		(*del)(cpy->content, cpy->content_size);
		free(*alst);
	}
	*alst = 0;
}
