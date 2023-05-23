/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selectionSort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:20:59 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 14:02:45 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_num(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	control_error(char **s, int sz)
{
	int	i;

	i = 0;
	while (i < sz)
	{
		if (check_num(s[i]) == 0)
			return (free_all(s, 1), 1);
		i++;
	}
	if (!s[1])
		return (free_all(s, 0), 0);
	if (duplicates(s, sz) == 0)
		return (free_all(s, 0), 1);
	if (sorted(s, sz) == 0)
		return (free_all(s, 0), 0);
	return (0);
}

static int	count_arguments(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
		i++;
	return (i);
}

void	get_element(char **args)
{
	int	count;

	count = count_arguments(args);
	if (control_error(args, count) == 1)
		return ;
	create_stacks(count, args, 0);
}
