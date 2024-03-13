/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:58:08 by abello-r          #+#    #+#             */
/*   Updated: 2024/03/13 03:16:50 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <math.h>
#include <signal.h>

int			g_foo = 1;

static void	reception(int sig)
{
	static size_t	i;
	static int		bit;
	static char		buf[1002];

	if (--bit == -1)
	{
		bit = 6;
		++i;
	}
	buf[i] &= ~(1 << 7);
	if (sig == SIGUSR1)
		buf[i] |= (1 << bit);
	else if (sig == SIGUSR2)
		buf[i] &= ~(1 << bit);
	if (i == 1001 || buf[i] == 127)
	{
		buf[i] = 0;
		write(STDOUT_FILENO, buf, i + 1);
		ft_memset(buf, '\0', 1001);
		i = 0;
		bit = 0;
	}
}

static void	close_server(int sig)
{
	ft_putstr_fd(RED "Server closed\n", 1);
	sig = 2;
	if (sig == 2)
		sig = 2;
	g_foo = 0;
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
		signal(SIGUSR1, reception);
		signal(SIGUSR2, reception);
		signal(SIGINT, close_server);
		while (g_foo)
		{
		}
	}
	return (0);
}
