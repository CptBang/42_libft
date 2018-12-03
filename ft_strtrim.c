/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 11:20:41 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 14:16:22 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int			start;
	size_t		finish;
	int			i;
	char		*new_string;

	i = 0;
	if (s == NULL)
		return (0);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != 0)
		i++;
	start = i;
	while (s[i + 1] != 0)
		i++;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	finish = i - start + 1;
	new_string = (char*)malloc(sizeof(char) * (finish + 1));
	if (new_string == 0)
		return (0);
	new_string = ft_strncpy(new_string, s + start, finish);
	new_string[finish] = 0;
	return (new_string);
}
