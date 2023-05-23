/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:52:26 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 13:45:39 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	x;
	char	*str2;

	str2 = (char *)str;
	x = (char)c;
	i = ft_strlen(str2);
	while (i >= 0)
	{
		if (str2[i] == x)
		{
			return (&str2[i]);
		}
		i--;
	}
	return (NULL);
}
