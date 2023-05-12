#include <unistd.h>

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void	snake(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				ft_putchar(str[i] - 32);
			else if ((str[i] >= 'A' && str[i] <= 'Z'))
				ft_putchar(str[i] + 32);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}