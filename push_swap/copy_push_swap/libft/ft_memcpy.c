/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:58:52 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 14:48:08 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;
	size_t				a;

	dest2 = dest;
	src2 = src;
	a = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (a < n)
	{
		dest2[a] = src2[a];
		a++;
	}
	return (dest);
}
