/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:39:22 by avenegas          #+#    #+#             */
/*   Updated: 2023/04/24 11:59:19 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countnumber(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 99)
	{
		n = n / 10;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	if (n < 10)
		i++;
	return (i);
}

void	*ft_itoa_nb(char *str, int total, int i, int n)
{
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

int	ft_itoa(int n)
{
	char	*str;
	int		i;
	int		total;
	int		negative;

	negative = 0;
	i = 0;
	if ((long)n == -2147483648)
		return (ft_putchar("-2147483648"), 11);
	total = ft_countnumber(n);
	str = malloc(sizeof(char) * total + 1);
	if (!str)
		return (0);
	if (n < 0)
	{
		n = n * -1;
		negative = 1;
	}
	ft_itoa_nb(str, total, i, n);
	if (negative == 1)
		str[0] = '-';
	return (ft_putchar_free(str), total);
}
