/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:18:41 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 19:46:11 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *str1, char const *str2, size_t num)
{
	if (num == 0)
		return (0);
	while (*str1 == *str2 && *str1 != 0 && *str2 != 0 && num > 1)
	{
		str1++;
		str2++;
		num--;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
