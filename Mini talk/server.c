#include "libft/libft.h"
#include <signal.h> // kill and SIGUSR1
#include <stdio.h>  //printf
#include <unistd.h> //sleep

static void	conexion(int sig, siginfo_t *info, void *context)
{
	static int				i;
	static pid_t			client_pid;
	static unsigned char	c;
	int						bit;
	int						shift;
	int						j;

	i = 0;
	client_pid = 0;
	c = 0;
	if (!client_pid)
		client_pid = info->si_pid;
	if (sig == SIGUSR2)
	{
		bit = 1;
		shift = 7 - i;
		for (j = 0; j < shift; j++)
		  bit = bit + bit;
		c = c + bit;
	}
	i = i + 1;
	if (i == 8)
	{
		i = 0;
		if (c == 0)
		{
			kill(client_pid, SIGUSR2);
			client_pid = 0;
			return ;
		}
		ft_putchar_fd(c, 1);
		c = 0;
		kill(client_pid, SIGUSR1);
	}
}

int	main(void)
{
	struct sigaction	act;

	int PID = getpid(); //obtiene PID
	if (!PID)
		ft_putstr_fd("error", 1);
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(PID, 1);
	ft_putstr_fd("\n", 1);
	act.sa_sigaction = conexion;
	//kill(PID, SIGUSR1); //envia señal SIGUSR1 a PID
	//sleep(1); //espera 1 segundo
	return (0);
}

/*


#include "libft/libft.h"
#include <signal.h>
#include <unistd.h>

static void	action(int sig, siginfo_t *info, void *context)
{
	static int				i;
	static pid_t			client_pid;
	static unsigned char	c;

	i = 0;
	client_pid = 0;
	c = 0;
	(void)context;
	if (!client_pid)
		client_pid = info->si_pid;
	c |= (sig == SIGUSR2);
	if (++i == 8)
	{
		i = 0;
		if (!c)
		{
			kill(client_pid, SIGUSR2);
			client_pid = 0;
			return ;
		}
		ft_putchar_fd(c, 1);
		c = 0;
		kill(client_pid, SIGUSR1);
	}
	else
		c <<= 1;
}

int	main(void)
{
	struct sigaction	s_sigaction;

	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	s_sigaction.sa_sigaction = action;
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1)
		pause();
	return (0);
}


*/