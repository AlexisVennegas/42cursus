#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int negative = 1;
    int i = 0;
    int result = 0;
    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            negative *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return(result * negative);
}   

int	is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

void ft_putchar(char letter)
{
    write(1, &letter, 1);
}

void ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else 
        ft_putchar(nb + '0');
    return ;
}

void prime(char *str)
{

    int nb = ft_atoi(str);
    int result = 0;
    int i = 2;
    while(nb > 0)
        if (is_prime(nb--))
				result += (nb + 1);
		ft_putnbr(result);
    return ;
}

int main(int argc, char **argv)
{
    if(argc == 2)
        prime(argv[1]);
    else
        ft_putnbr(0);
    write(1, "\n", 1);
}