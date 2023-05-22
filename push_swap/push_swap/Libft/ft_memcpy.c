/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:48:46 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/20 14:22:55 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	i = 0;
	if (dest_cpy == '\0' && src_cpy == '\0')
		return (NULL);
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest_cpy);
}
/*
int	main(void)
{
	char src[50] = "perro";
	char dest[50] = "pqrstuvwxyzabcd";

	//printf("resultado mempcy: %s\n", memcpy(dest, src, 5));
	//printf("size mempcy: %lu\n", sizeof(memcpy(dest, src, 5)));

	printf("hoda: %s", ft_memcpy(dest, src, 5));

	return (0);
}
 copia el src en el dest hasta el n que le pasemos como parametros
*/