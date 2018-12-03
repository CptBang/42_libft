/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:55:18 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/29 19:55:48 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char const *str, int character)
{
	while (*str != 0)
	{
		if (*str == character)
			return ((char*)str);
		str++;
	}
	if (*str == character)
		return ((char*)str);
	return (0);
}
