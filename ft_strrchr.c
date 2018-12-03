/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:28:00 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/30 15:53:07 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int character)
{
	char	*cpy;
	int		i;

	cpy = (char*)str;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (cpy[i] == (char)character)
			return (&cpy[i]);
		i--;
	}
	return (0);
}
