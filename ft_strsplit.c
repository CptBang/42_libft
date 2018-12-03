/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 11:52:50 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/03 13:04:10 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**wa;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s == 0 || (wa = (char**)malloc(sizeof(char*) * (ft_wc(s, c) + 1))) == 0)
		return (0);
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != 0)
		{
			if ((wa[j++] = ft_strtrim_c(s, i, c)) == 0)
			{
				ft_free2d(wa);
				return (0);
			}
		}
		while (s[i] != c && s[i] != 0)
			i++;
	}
	wa[j] = NULL;
	return (wa);
}
