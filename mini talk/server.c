/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:58:08 by abello-r          #+#    #+#             */
/*   Updated: 2024/03/14 12:58:41 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <math.h>
#include <signal.h>

int			bolean_cicle = 1;

static void	receive_bites(int signal_number)
{
	static size_t	i;
	static int		bit;
	static char		buf[1000];

	if (--bit == -1)
	{
		bit = 6;
		++i;
	}
	buf[i] &= ~(1 << 7);
	if (signal_number == SIGUSR1)
		buf[i] |= (1 << bit);
	else if (signal_number == SIGUSR2)
		buf[i] &= ~(1 << bit);
	if (buf[i] == 127)
	{	
		buf[i] = '\0';
		write(STDOUT_FILENO, buf, i + 1);
		ft_memset(buf, '\0', 1001);
		i = 0;
		bit = 0;
	}
}

static void	close_server(int signal_number)
{
	ft_putstr_fd(RED "Server closed\n", 1);
	signal_number = 2;
	if (signal_number == 2)
		signal_number = 2;
	bolean_cicle = 0;
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
		signal(SIGUSR1, receive_bites);
		signal(SIGUSR2, receive_bites);
		signal(SIGINT, close_server);
		while (bolean_cicle)
		{
		}
	}
	return (0);
}
