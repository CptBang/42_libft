/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:25:02 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/03 13:31:33 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*exception(int n)
{
	char	*num_str;
	int		i;

	i = 10;
	num_str = (char*)malloc(sizeof(char) * 12);
	if (num_str == NULL)
		return (NULL);
	n = 2147483647;
	while (n > 0)
	{
		num_str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	num_str[0] = '-';
	num_str[10] = '8';
	num_str[11] = '\0';
	return (num_str);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*num_str;
	int		sign;

	if (n == -2147483648)
		return (exception(n));
	len = ft_numlen(n);
	num_str = (char*)malloc(sizeof(char) * (len + 1));
	if (num_str == NULL)
		return (NULL);
	num_str[len] = '\0';
	len--;
	sign = 1;
	if (n < 0)
		sign = -1;
	n *= sign;
	while (n >= 0 && len >= 0)
	{
		num_str[len--] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		num_str[0] = '-';
	return (num_str);
}
