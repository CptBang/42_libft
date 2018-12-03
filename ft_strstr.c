/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:28:52 by mschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:49:33 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char const *str1, char const *str2)
{
	int		i;
	char	*temp;

	if (str2[0] == 0)
		return ((char*)str1);
	while (*str1 != 0)
	{
		i = 0;
		if (*str1 == str2[i])
		{
			temp = (char*)str1;
			while (*temp == str2[i] && str2[i] != 0)
			{
				temp++;
				i++;
			}
			if (str2[i] == 0)
				return ((char*)str1);
		}
		str1++;
	}
	return (0);
}
