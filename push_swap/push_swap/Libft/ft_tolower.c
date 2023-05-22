/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:43:02 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/13 14:41:14 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int argument)
{
	if (argument >= 'A' && argument <= 'Z')
	{
		argument += 32;
	}
	return (argument);
}

/*
int	main(void)
{
	int	c;

	
	c = 'C';
	printf("%c\n",ft_tolower(c));
	printf("%c\n",tolower(c));
	return (0);
}
convierte a miniscula 
*/
