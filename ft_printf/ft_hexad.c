/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:37:43 by avenegas          #+#    #+#             */
/*   Updated: 2023/04/24 12:06:32 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_hexa(unsigned long int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_hexad(unsigned long int nb)
{
	char	rest;
	char	*str;
	int		i;
	int		total;

	if (nb == 0)
		return (ft_letter('0'), 1);
	total = ft_count_hexa(nb);
	str = malloc(total * sizeof(char) + 1);
	if (!str)
		return (0);
	rest = 0;
	i = 1;
	while (nb != 0)
	{
		rest = nb % 16;
		if (rest >= 10)
			str[total - i++] = rest - 10 + 'a';
		else
			str[total - i++] = rest + '0';
		nb /= 16;
	}
	str[total] = '\0';
	return (ft_putchar_free(str), total);
}
