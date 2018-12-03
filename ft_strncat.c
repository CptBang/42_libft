/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:14:39 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/01 17:32:19 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char const *src, size_t num)
{
	size_t		i;
	int			end;

	i = 0;
	end = ft_strlen(dest);
	while (src[i] != 0 && i < num)
	{
		dest[end] = src[i];
		i++;
		end++;
	}
	dest[end] = 0;
	return (dest);
}
