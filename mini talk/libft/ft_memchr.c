/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:08:50 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/24 13:55:10 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*str2;
	char	x;

	str2 = (char *)str;
	x = (char)c;
	i = 0;
	while (i < n)
	{
		if (str2[i] == x)
			return ((char *)&str2[i]);
		i++;
	}
	if (ft_strlen(str) < n)
		return (NULL);
	return (NULL);
}
/*
int main () {
   const char str[] = "comeresbueno";

	printf("funcion: %s\n", ft_memchr(str, 'z', 99)); 
	printf("memchr : %s", memchr(str, 'z', 99));
   return(0);
}


compara los n primeros bytes de la memoria apuntada por str con el byte c

*/