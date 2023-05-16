#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h> //sleep

void	client(char *s1, char *s2)
{
	int	PID;

	PID = ft_atoi(s1);
	if (!PID)
		exit(0) ;
    printf("%s", s2);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		client(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}