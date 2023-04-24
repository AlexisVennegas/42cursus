/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:36:55 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/06 15:01:12 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prueba(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			prueba(num1 / 10 + '0');
			prueba(num1 % 10 + '0');
			prueba(' ');
			prueba(num2 / 10 + '0');
			prueba(num2 % 10 + '0');
			if (num1 != 98)
			{
				prueba(',');
				prueba(' ');
			}
			num2++;
		}
		num1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/