/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:59:32 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/24 13:01:14 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	int		i;

	i = 0;
	if (ptr == 0)
		return (ft_print_str("(nil)"));
	if (ptr < 16)
		i += ft_print_str("0x");
	if (ptr >= 16)
		i += ft_print_ptr(ptr / 16);
	i += ft_print_hex(ptr % 16, 0);
	return (i);
}
