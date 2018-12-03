/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:45:03 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/29 11:59:03 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char	*ptr1;
	unsigned char	value1;

	ptr1 = (unsigned char*)ptr;
	value1 = (unsigned char)value;
	while (num > 0)
	{
		if (*ptr1 == value1)
			return (void*)(ptr1);
		ptr1++;
		num--;
	}
	return (0);
}
