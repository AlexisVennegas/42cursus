/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:47:56 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/20 12:02:21 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alexa(char n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_alexa('-');
		ft_alexa('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_alexa('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_alexa(nb + 48);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/