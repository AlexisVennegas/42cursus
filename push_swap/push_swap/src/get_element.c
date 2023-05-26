/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_element.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:20:59 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/26 17:32:48 by avenegas         ###   ########.fr       */
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

int	control_error(char **s, int sz)
{
	int	i;

	i = 0;
	while (i < sz && s[i] != NULL)
	{
		if (!check_num(s[i]))
			return (free_all(s, 1), 1);
		i++;
	}
	if (duplicates(s, sz))
		return (free_all(s, 1), 1);
	if (sorted(s, sz))
		return (free_all(s, 0), 1);
	return (0);
}

void	get_element(char **args, int len)
{
	if (control_error(args, len))
		return ;
	else
		create_stacks(len, args, 0);
}
