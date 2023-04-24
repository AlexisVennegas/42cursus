/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:18:25 by avenegas          #+#    #+#             */
/*   Updated: 2023/04/24 12:02:43 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_free(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (free(str), i);
}

int	ft_letter(int letter)
{
	return (write(1, &letter, 1), 1);
}

int	ft_putchar(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6), 6);
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}
