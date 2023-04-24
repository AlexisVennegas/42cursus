/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:02:21 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/06 14:56:11 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	r;

	r = 'a';
	while (r <= 'z')
	{	
		write(1, &r, 1);
	r++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/