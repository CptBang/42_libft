/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:25:15 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/01 16:40:23 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_c(char const *s, int i, char c)
{
	int			start;
	size_t		finish;
	char		*new_string;

	start = i;
	if (s == NULL)
		return (0);
	while (s[i] != c && s[i] != '\0')
		i++;
	finish = i - start;
	new_string = (char*)malloc(sizeof(char) * (finish));
	if (new_string == 0)
		return (0);
	new_string = ft_strncpy(new_string, s + start, finish);
	new_string[finish] = 0;
	return (new_string);
}
