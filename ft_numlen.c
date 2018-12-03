/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:20:01 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/01 13:44:30 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numlen(int n)
{
	int		temp;
	int		len;
	int		sign;

	len = 0;
	sign = 1;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		sign = -1;
		n *= -1;
	}
	temp = n;
	while (temp > 0)
	{
		temp /= 10;
		len++;
	}
	return (len);
}
