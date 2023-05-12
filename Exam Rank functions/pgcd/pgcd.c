#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	negative = 1;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			negative = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * negative);
}

void	pgcd(char *str, char *str2)
{
	int	nb2;
	int	nb1;
	int	result;
	int	div;

	nb1 = ft_atoi(str);
	nb2 = ft_atoi(str2);
	if (nb1 <= 0 || nb2 <= 0)
		return ;
	div = 1;
	result = 0;
	while (div <= nb1 || div <= nb2)
	{
		if (nb1 % div == 0 && nb2 % div == 0)
			result = div;
		div++;
	}
	ft_putnbr(result);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}