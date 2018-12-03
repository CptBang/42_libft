/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:55:23 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:42:00 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *cpy, const void *str, size_t num)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			i;

	arr1 = (unsigned char*)cpy;
	arr2 = (unsigned char*)str;
	i = 0;
	if (arr1 < arr2)
		return (ft_memcpy(cpy, str, num));
	else
	{
		i = num;
		while (i-- > 0)
			arr1[i] = arr2[i];
	}
	return (cpy);
}
