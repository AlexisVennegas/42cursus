/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:28:05 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/22 19:02:33 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		nb--;
		result = result * nb;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("result: %i", ft_iterative_factorial(5));
	return (0);
}
*/