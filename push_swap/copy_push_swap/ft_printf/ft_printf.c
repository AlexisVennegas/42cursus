/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:59:50 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/24 13:01:50 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_case(const char *input, va_list ap)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_print_char(va_arg(ap, int));
	else if (*input == 's')
		i += ft_print_str(va_arg(ap, char *));
	else if (*input == 'p')
		i += ft_print_ptr(va_arg(ap, unsigned long));
	else if (*input == 'd' || *input == 'i')
		i += ft_print_int(va_arg(ap, int));
	else if (*input == 'u')
		i += ft_print_uint(va_arg(ap, unsigned int));
	else if (*input == 'x')
		i += ft_print_hex(va_arg(ap, unsigned int), 0);
	else if (*input == 'X')
		i += ft_print_hex(va_arg(ap, unsigned int), 1);
	else if (*input == '%')
		i += ft_print_char('%');
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, input);
	while (*input)
	{
		if (*input == '%' && *(input + 1) != '\0')
		{
			i += ft_case(input + 1, ap);
			input++;
		}
		else
			i += ft_print_char(*input);
		input++;
	}
	va_end(ap);
	return (i);
}
