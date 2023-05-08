/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hupper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:42:48 by avenegas          #+#    #+#             */
/*   Updated: 2023/04/24 12:12:26 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	write(1, &ch, 1);
	return ;
}

char	*ft_hupper_control(unsigned int nb, char *str, int total)
{
	unsigned int	rest;
	int				i;

	i = 1;
	rest = 0;
	while (nb != 0)
	{
		rest = nb % 16;
		if (rest > 9)
			str[total - i++] = (char)(rest - 10) + 'A';
		else
			str[total - i++] = (char)rest + '0';
		nb /= 16;
	}
	return (str[total] = '\0', str);
}

int	ft_hupper(unsigned int nb)
{
	char	*str;
	int		i;
	int		total;

	if (nb == 0)
		return (ft_letter('0'), 1);
	total = ft_count_hexa(nb);
	str = malloc(total * sizeof(char) + 1);
	if (!str)
		return (0);
	i = 0;
	str = ft_hupper_control(nb, str, total);
	while (str[i] != '\0')
		ft_toupper(str[i++]);
	return (free(str), total);
}
