/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:40:46 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/30 19:30:31 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh_string;
	int		i;

	if (s == 0)
		return (0);
	i = ft_strlen(s);
	fresh_string = (char*)malloc(sizeof(char) * (i + 1));
	if (fresh_string == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		fresh_string[i] = (*f)(s[i]);
		i++;
	}
	fresh_string[i] = 0;
	return (fresh_string);
}
