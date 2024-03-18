/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_element.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:20:59 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/18 09:43:55 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_all(char **s, int boolean)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	if (boolean)
		ft_putstr_fd("Error\n", 2);
	free(s);
}

static int	check_num(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	control_error(char **ar, int len)
{
	int	i;

	i = 0;
	while (i < len && ar[i] != NULL)
	{
		if (check_num(ar[i]))
			return (free_all(ar, 1), 1);
		i++;
	}
	if (duplicates(ar, len))
		return (free_all(ar, 1), 1);
	if (sorted(ar, len))
		return (free_all(ar, 0), 1);
	create_stacks(len, ar);
	return (0);
}
