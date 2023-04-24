/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:16:26 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/22 19:03:49 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
	{
		return (1);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else if (nb <= 0)
	{
		return (0);
	}
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
/*
#include <stdio.h>


int	main(void)
{
	printf("result: %i", ft_recursive_factorial(5));
	return (0);
}
*/