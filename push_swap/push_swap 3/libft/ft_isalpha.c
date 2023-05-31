/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:42:33 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/22 16:25:27 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int argument)
{
	if ((argument >= 'A' && argument <= 'Z') || (argument >= 'a'
			&& argument <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = '1';
	printf("funcion: %d\n", ft_isalpha(c));
	printf("is_alpha: %d", isalpha(c));
	return (0);
}

Si un carácter pasado a isalpha() es un alfabeto, 
devuelve un número entero distinto de cero; si no, devuelve 0.

*/