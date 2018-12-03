/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 21:19:42 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/02 18:59:52 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if ((i + j) == 0)
	{
		new_string = (char*)malloc(sizeof(char));
		new_string = ft_strcat(ft_strcpy(new_string, s1), s2);
		return (new_string);
	}
	new_string = (char*)malloc(sizeof(char) * (i + j - 1));
	if (new_string == 0)
		return (0);
	new_string = ft_strcat(ft_strcpy(new_string, s1), s2);
	return (new_string);
}
