/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:59:41 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/24 12:59:42 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_print_uint(n / 10);
	i += ft_print_char(n % 10 + '0');
	return (i);
}
