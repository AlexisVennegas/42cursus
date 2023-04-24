/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:28:17 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/20 12:08:38 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	write(1, &nbr, 1);
}

int	main(void)
{
	ft_putnbr_base(32, "0123456789");
	return (0);
}
