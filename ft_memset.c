/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:52:36 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/30 18:43:59 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int replace, size_t num)
{
	unsigned char	*arr;

	arr = (unsigned char*)ptr;
	while (num-- > 0)
		*arr++ = replace;
	return ((void*)ptr);
}
