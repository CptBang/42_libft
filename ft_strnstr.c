/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:25:31 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 15:35:38 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str1, char const *str2, size_t num)
{
	size_t			i;
	int				j;
	char const		*temp;

	if (str2[0] == 0)
		return ((char*)str1);
	while (*str1 != 0 && num > 0)
	{
		i = 0;
		if (*str1 == str2[i])
		{
			temp = str1;
			j = (int)num;
			while (*temp == str2[i] && str2[i] != 0 && j-- > 0)
			{
				temp++;
				i++;
			}
			if (str2[i] == 0 && j >= 0)
				return ((char*)str1);
		}
		str1++;
		num--;
	}
	return (0);
}
