/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:42:40 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/06 15:02:08 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	int		j;
	int		k;
	char	l;

	i = '-';
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, &i, 1);
	}
	j = nb % 10;
	k = nb / 10;
	if (k != 0)
	{
		ft_putnbr(k);
	}
	l = j + '0';
	write(1, &l, 1);
}
/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/