/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:15:51 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/20 14:00:35 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int i = 0;
	while(i <= 9)
	{
		printf("funcion: %i\n", ft_isalnum(i));
		i++;
	}

	//printf("alahu  : %i", isalnum(c));
}

Devuelve 1 siargumentoes un carácter alfanumérico.
Devuelve 0 siargumentono no es un carácter alfanumérico.
*/
