/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:28:30 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/22 18:48:29 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power < 1)
	{
		return (1);
	}
	else
	{
		nb = nb * ft_recursive_power(nb, --power);
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_power(1, 1));
	return (0);
}
*/