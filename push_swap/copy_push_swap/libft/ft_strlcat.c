/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:47:48 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 16:06:29 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strl(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

static int	ft_const_strl(const char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	a;

	dstlen = ft_strl(dst);
	srclen = ft_const_strl(src);
	a = 0;
	if (dstsize <= dstlen || dstsize == 0)
		return (dstsize + srclen);
	while (dstlen + a < dstsize - 1 && src[a] != '\0')
	{
		dst[dstlen + a] = src[a];
		a++;
	}
	dst[dstlen + a] = '\0';
	return (dstlen + srclen);
}
