/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:06:18 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/08 19:53:22 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	while (i <= size)
	{
		n = size - 1;
		if (tab[size] <= tab[n])
		{
			write(1, &tab[size], 1);
		}
		else
		{
			write(1, &tab[n], 1);
		}
	}
}
/*
int	main(void)
{
	ft_sort_int_tab(3, 4);
	return (0);
}
*/
