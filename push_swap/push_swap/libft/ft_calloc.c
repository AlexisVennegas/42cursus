/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:14:02 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/22 16:25:28 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*total;
	size_t	i;

	i = 0;
	total = malloc(count * size);
	if (!total)
		return (NULL);
	while (i < count * size)
	{
		total[i] = 0;
		i++;
	}
	return (total);
}
/*

primero malloc asigna el tamaño de memoria que le pedimos, y
 luego lo llena de  a 0
*/