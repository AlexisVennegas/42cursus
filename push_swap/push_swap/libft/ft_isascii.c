/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:25:56 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/07 13:26:45 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = '\n';
	printf("%d\n", ft_isascii(c));
	printf("%d", isascii(c));
	return (0);
}

Comprueba sin un carácter pertenece al ASCII de 7 bits.
isascii es una macro que verifica el entero c pertenece al 
rango de (0 a 127). Esta macro está definida para todos
 lo valores enteros.

*/