/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:23:41 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 19:37:16 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	if (n == 0)
		return (1);
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0 && n > 0)
	{
		i++;
		n--;
		if (s1[i - 1] == s2[i - 1] && n == 0)
			return (1);
	}
	if (s1[i] != s2[i])
		return (0);
	return (1);
}
