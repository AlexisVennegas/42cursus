/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:55:16 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/23 16:57:38 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_jarvis(int nb, int check)
{
	if (check * check == nb)
	{
		return (check);
	}
	else if (check * check > nb)
	{
		return (0);
	}
	else
	{
		return (ft_sqrt_jarvis(nb, check + 1));
	}
}

int	ft_sqrt(int nb)
{
	if (nb > 2147395600)
	{
		return (0);
	}
	return (ft_sqrt_jarvis(nb, 0));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_sqrt(25));
	return (0);
}
*/