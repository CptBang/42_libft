/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:46:23 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 19:45:40 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)ptr1;
	str2 = (unsigned char*)ptr2;
	if (num == 0)
		return (0);
	while (*str1 == *str2 && num > 1)
	{
		str1++;
		str2++;
		num--;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
