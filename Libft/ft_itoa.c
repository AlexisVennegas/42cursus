/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:12:54 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/20 14:14:43 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnumber(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 99)
	{
		n = n / 10;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	if (n < 10)
		i++;
	return (i);
}

void	*ft_itoa_nb(char *str, int total, int i, int n)
{
	if (n > 9)
	{
		while (n > 9)
		{
			str[total - i - 1] = n % 10 + '0';
			n = n / 10;
			i++;
		}
	}
	if (n <= 9)
	{
		str[total - i - 1] = n % 10 + '0';
		i++;
	}
	str[total] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		total;
	int		negative;

	negative = 0;
	i = 0;
	if ((long)n == -2147483648)
		return (ft_strdup("-2147483648"));
	total = ft_countnumber(n);
	str = malloc(sizeof(char) * total + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		negative = 1;
	}
	ft_itoa_nb(str, total, i, n);
	if (negative == 1)
		str[0] = '-';
	return (str);
}
/*
int main()
{
    int n = 123;
    printf("%s", ft_itoa(n));
    return 0;
}


de entero a string 
*/