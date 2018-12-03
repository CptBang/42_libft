/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:19:57 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/28 20:32:20 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *cpy, char const *str, size_t num)
{
	size_t		i;

	i = 0;
	while (str[i] != 0 && i < num)
	{
		cpy[i] = str[i];
		i++;
	}
	while (i < num)
	{
		cpy[i] = 0;
		i++;
	}
	return (cpy);
}
