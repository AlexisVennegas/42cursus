/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_div.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:29:25 by acaceres          #+#    #+#             */
/*   Updated: 2023/02/19 22:59:46 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int	returnline(char *arg);
void			ft_result(int x);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

void	ft_put_number(char c)
{
	char	*ex;

	ex = &c;
	returnline(ex);
}

void	ft_number_div(int argnum)
{
	if (argnum / 10 == 0)
	{
		ft_put_number(argnum + '0');
		return ;
	}
	ft_number_div(argnum / 10);
	ft_put_number(argnum % 10 + '0');
	return ;
}
