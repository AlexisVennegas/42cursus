/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:23:40 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/22 19:07:23 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	if ((nb == 0 && power == 0) || (nb == 1 && power == 0))
	{
		return (1);
	}
	else if ((nb == 0 && power == 1) || power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_power(-2, 7));
}
*/