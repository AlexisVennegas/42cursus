/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:02:10 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/16 18:06:48 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	send_signal(int pid, unsigned char character)
{
	int				i;
	unsigned char	temp_char;

	i = 8;
	temp_char = character;
	while (i > 0)
	{
		i--;
		temp_char = character >> i;
		if (temp_char % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(50);
	}
}

int	main(int argc, char **argv)
{
	int	pid_num;
	int	i;

	i = 0;
	if (argc == 1 || !argv[1])
		return (ft_putstr_fd("Ingresa el PID\n", 2), 1);
	if (argc < 3)
		return (ft_putstr_fd("Ingresa el mensaje\n", 2), 1);
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(ft_atoi(argv[1]), 1);
	if (argc == 3)
	{
		pid_num = ft_atoi(argv[1]);
		if (!pid_num)
			return (ft_putstr_fd("Error al procesar PID\n", 2), 0);
		else
			while (argv[2][i])
				send_signal(pid_num, argv[2][i++]);
		send_signal(pid_num, '\0');
	}
	return (0);
}
