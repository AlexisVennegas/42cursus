/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:29:11 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/23 18:12:22 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
/*

#include <stdio.h>

int	main(void)
{
	printf("%i", ft_is_prime(4));
	return (0);
}
*/