/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:59:05 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 14:26:16 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;

	dest2 = dest;
	src2 = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest2 <= src2 || dest2 >= (src2 + n))
	{
		while (n-- > 0)
			*dest2++ = *src2++;
	}
	else
	{
		dest2 += n;
		src2 += n;
		while (n-- > 0)
			*(--dest2) = *(--src2);
	}
	return (dest);
}
