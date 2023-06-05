/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:36:15 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/11 16:19:23 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		ch -= 32;
	}
	return (ch);
}

/*
int	main(void)
{
	int ch; 
	ch = '-';
	printf("%c\n", ft_toupper(ch));
	printf("%c\n", toupper(ch));
	return (0);
}

si es minus. lo convierte a mayus.
si no es mins, devuelve el mismo ch.
*/