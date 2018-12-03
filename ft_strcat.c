/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:54:19 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/28 20:14:25 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		end;

	i = 0;
	end = ft_strlen(dest);
	while (src[i] != 0)
	{
		dest[end] = src[i];
		i++;
		end++;
	}
	dest[end] = 0;
	return (dest);
}
