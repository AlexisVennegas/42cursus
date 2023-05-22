/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:10:17 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 13:53:27 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str, t_list *lst)
{
	int				a;
	int				s;
	long long int	result;
	int				nbr;

	a = 0;
	s = 1;
	result = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			s *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		result = result * 10 + str[a] - '0';
		a++;
	}
	nbr = result;
	if ((result > 2147483647 && s == 1) || (result > 2147483648 && s == -1))
		lst->atoierror = -1;
	return (s * nbr);
}
