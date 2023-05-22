/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:59:16 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 14:26:43 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*replace;
	unsigned char	value;
	size_t			a;

	a = 0;
	replace = s;
	value = c;
	while (a < n)
	{
		if (*replace != value)
			*replace = value;
		replace++;
		a++;
	}
	return (s);
}
