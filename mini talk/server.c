/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:06:31 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/16 18:42:37 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <math.h>
#include <signal.h>

void	recept_bites(int signal_number)
{
	static unsigned char	current_char;
	static int				bit_index;

	current_char |= (signal_number == SIGUSR1);
	bit_index++;
	if (bit_index == 8)
	{
		if (!current_char)
			ft_putstr_fd("\n", 1);
		else
			ft_putchar_fd(current_char, 1);
		bit_index = 0;
		current_char = 0;
	}
	else
		current_char <<= 1;
}

static void	close_server(int signal_number)
{
	if (signal_number)
		ft_putstr_fd(RED "Server closed\n", 1);
	return (exit(0));
}

int	main(int argc, char **argv)
{
	pid_t	pid_num;

	if (argc != 1 || argv[1])
		return (ft_putstr_fd("Error\n", 2), 1);
	else
	{
		pid_num = getpid();
		if (pid_num == 0 || !pid_num)
			return (ft_putstr_fd("Error\n", 2), 1);
		ft_putstr_fd(GREEN "PID: ", 1);
		ft_putnbr_fd(pid_num, 1);
		ft_putstr_fd("\n", 1);
		signal(SIGUSR1, recept_bites);
		signal(SIGUSR2, recept_bites);
		signal(SIGINT, close_server);
		while (1)
			pause();
	}
	return (0);
}
