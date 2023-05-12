#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_count(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}
char	*ft_itoa_cut(char *str, int total, int nbr)
{
	int	i;

	i = 0;
	if (nbr > 9)
	{
		while (nbr > 9)
		{
			str[total - i - 1] = nbr % 10 + '0';
			i++;
			nbr /= 10;
		}
	}
	if (nbr <= 9)
	{
		str[total - i - 1] = nbr % 10 + '0';
		i++;
	}
	str[total] = '\0';
	return (str);
}

char	*ft_itoa(int nbr)
{
	int		negative;
	char	*str;
	int		total;

	negative = 0;
	if (nbr == -2147483648)
		return ("-2147483648");
	total = ft_count(nbr);
	str = malloc(sizeof(int) * total + 1);
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		negative = 1;
	}
	ft_itoa_cut(str, total, nbr);
	if (negative == 1)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
    printf("%s", ft_itoa("0"));
    return(0);
}
*/