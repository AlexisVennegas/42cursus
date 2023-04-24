/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsig.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:44:34 by avenegas          #+#    #+#             */
/*   Updated: 2023/04/24 12:51:28 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countnumber_u(unsigned long n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	if (n < 10)
		i++;
	return (i);
}

void	*ft_itoa_nb_u(char *str, int total, unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		while (n > 9)
		{
			str[total - i - 1] = n % 10 + '0';
			n = n / 10;
			i++;
		}
	}
	if (n <= 9)
	{
		str[total - i - 1] = n % 10 + '0';
		i++;
	}
	str[total] = '\0';
	return (str);
}

int	ft_unsig(unsigned int nb)
{
	char			*str;
	unsigned int	total;

	total = ft_countnumber_u(nb);
	str = malloc(sizeof(char) * total + 1);
	if (!str)
		return (0);
	str = ft_itoa_nb_u(str, total, nb);
	return (ft_putchar_free(str), total);
}
