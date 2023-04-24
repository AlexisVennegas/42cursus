/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:29:40 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/06 14:59:59 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(int test1, int test2, int test3)
{
	write(1, &test1, 1);
	write(1, &test2, 1);
	write(1, &test3, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				imprimir(a, b, c);
				c++;
				if (a != '7')
				{
					write(1, ",", 1);
				}
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/