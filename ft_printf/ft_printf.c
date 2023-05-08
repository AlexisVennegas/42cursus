/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:39:37 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/03 09:50:45 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_evaluator(const char *str, va_list newlist)
{
	int	total;

	total = 0;
	if (str[1] == 'i' || str[1] == 'd')
		total = ft_itoa(va_arg(newlist, int));
	else if (str[1] == 's')
		total = ft_putchar(va_arg(newlist, char *));
	else if (str[1] == 'c')
		total = ft_letter(va_arg(newlist, int));
	else if (str[1] == 'x')
		total = ft_hexad(va_arg(newlist, unsigned int));
	else if (str[1] == 'X')
		total = ft_hupper(va_arg(newlist, unsigned int));
	else if (str[1] == 'u')
		total = ft_unsig(va_arg(newlist, unsigned int));
	else if (str[1] == 'p')
		total = ft_pointer(va_arg(newlist, unsigned long int));
	else if (str[1] == '%')
		total = ft_letter('%');
	else
		return (-1);
	return (total);
}

int	ft_printf(char const *param, ...)
{
	int	print_int;
	int	i;
	int	x;

	va_list(newlist);
	va_start(newlist, param);
	i = 0;
	x = 0;
	print_int = 0;
	while (param[i])
	{
		if (param[i] == '%')
		{
			x = ft_evaluator(&param[i++], newlist);
			if (x < 0)
				break ;
			else
				print_int += x;
		}
		else
			print_int += ft_letter(param[i]);
		i++;
	}
	return (va_end(newlist), print_int);
}
/*
int	main(void)
{
	int	x;

	x = 100;
	ft_printf("%i", x);
	return(0);
}
*/