/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:47:22 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/30 12:09:07 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *cpy, const void *str, size_t num)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			i;

	arr1 = (unsigned char*)cpy;
	arr2 = (unsigned char*)str;
	i = 0;
	while (i < num)
	{
		arr1[i] = arr2[i];
		i++;
	}
	return ((void*)cpy);
}
