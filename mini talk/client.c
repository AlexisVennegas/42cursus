/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:58:08 by abello-r          #+#    #+#             */
/*   Updated: 2024/03/13 02:23:38 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

static int	send_bin(pid_t pid, char c)
{
	int	bit;

	bit = 7;
	while (--bit > -1)
	{
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(1000);
	}
	return (0);
}

static int	ftp_server(pid_t pid_num, char *str)
{
	int	i;

	i = 0;
	while (str[i] >= ' ' && str[i] <= '~')
	{
		if (send_bin(pid_num, str[i]))
			return (1);
		++i;
	}
	i = 0;
	while (i < 7)
	{
		kill(pid_num, SIGUSR1);
		i++;
		usleep(1000);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	pid_num;

	if (argc == 1 || !argv[1])
		return (ft_putstr_fd("Ingresa el PID\n", 2), 1);
	if (argc < 3)
		return (ft_putstr_fd("Ingresa el mensaje\n", 2), 1);
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(ft_atoi(argv[1]), 1);
	fflush(stdout);
	system("ps | grep \"./server\" | awk 'NR==3 { print $1 }'");
	if (argc == 3)
	{
		pid_num = ft_atoi(argv[1]);
		if (!pid_num)
			return (ft_putstr_fd("Error al procesar PID\n", 2), 1);
		else if (pid_num)
			ftp_server(pid_num, argv[2]);
	}
	return (0);
}
