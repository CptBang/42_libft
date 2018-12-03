/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:43:26 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 15:40:16 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *cpy, const void *str, int c, size_t num)
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
		if (arr1[i] == (unsigned char)c)
			return (arr1 + i + 1);
		i++;
	}
	return (NULL);
}
