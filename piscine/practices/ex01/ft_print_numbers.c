/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:45:30 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/22 19:59:41 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_jarvis(char c)
{
	write(1, &c, 1);
}



void	ft_print_numbers(void)
{
	char i;

	i = '0';
	while(i <= '9')
	{	
	ft_jarvis(i);
	i++;
	}
}

int main(void)
{
	ft_print_numbers();
	return (0);
}

