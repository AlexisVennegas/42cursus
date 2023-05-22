/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:41:22 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/22 16:25:24 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	c;

	c = '+';
	printf("%d\n", ft_isprint(c));
	printf("%d", isprint(c));
}


CUANDO SE PUEDE IMPRIMIR = 1;
CUANDO NO SE PUEDE IMPRIMIR = 0

*/