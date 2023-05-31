/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:02:16 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/22 16:25:25 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	printf("funcion: %d\n", ft_isdigit(c));
	printf("isdigit: %d", isdigit(c));
	return (0);
}



Resultado cuando se pasa carácter numérico: 1
Resultado cuando se pasa un carácter no numérico: 0

*/