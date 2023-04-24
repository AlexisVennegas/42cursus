/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:34:11 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/08 17:49:46 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	i;

	i = 0;
	while (i < size / 2)
	{
	x = tab[i];
	tab[i] = tab[size - 1 - i];
	tab[size - 1 - i] = x;
	i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 2, 3};

	ft_rev_int_tab(tab, 3);
	return (0);
}
*/