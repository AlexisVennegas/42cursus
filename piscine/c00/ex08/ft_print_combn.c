/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:59:30 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/06 15:02:55 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(char c)
{
	write(1, &c, 1);
}

void	t_print_combn(int n)
{
	while (n > 0 && n < 10)
	{
		n++;
		while (n <= 99)
		{
			imprimir(n);
		}
	}
}
/*
int	main(void)
{
	t_print_combn(4);
	return (0);
}
*/