/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:28:53 by acaceres          #+#    #+#             */
/*   Updated: 2023/02/19 22:28:54 by acaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_atoi(char *str)
{
	int				i;
	unsigned int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == 32)
			i++;
		if (str[i] == '-')
		{
			i++;
		}
		if (str[i] == '+')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
		}
		i++;
	}
	return (result);
}
