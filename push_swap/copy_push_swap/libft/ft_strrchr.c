/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:03:17 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 14:32:31 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	uc;

	uc = (unsigned char)c;
	last = NULL;
	while (*s != '\0')
	{
		if (*s == uc)
			last = (char *)s;
		s++;
	}
	if (*s == uc)
		last = (char *)s;
	return (last);
}
