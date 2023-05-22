/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:03:00 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 16:26:39 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len <= 0 || haystack[0] == '\0')
		return (NULL);
	while (haystack[a] != '\0' && a < len)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && (a + b) < len)
		{
			if (needle[b + 1] == '\0')
				return ((char *)haystack + a);
			b++;
		}
		a++;
	}
	return (NULL);
}
