/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:25:05 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/20 14:21:35 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	const unsigned char	*str1_c;
	const unsigned char	*str2_c;

	i = 0;
	str1_c = (const unsigned char *)str1;
	str2_c = (const unsigned char *)str2;
	while (i < n)
	{
		if (str1_c[i] != str2_c[i])
		{
			return (str1_c[i] - str2_c[i]);
		}
		i++;
	}
	return (0);
}
/*
int main () {	
	char str1[15] = {"hola"};
	char str2[15] = {"hola"};
	printf("funcion: %i\n", ft_memcmp(str1, str2, 5));
	//printf("memcmp: %i" ,memcmp(str1, str2, 5));
   return(0);
}

si el valor de retorno <0, indica que str1 es menor que str2.

si el valor de retorno > 0, indica que str2 es menor que str1.

si el valor de retorno = 0, indica que str1 es igual a str2.

*/