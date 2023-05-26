/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controlError.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:34:46 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/26 15:23:03 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sorted(char **s, int sz)
{
	int	i;
	int	j;

	i = 0;
	while (i < sz && s[i] != NULL)
	{
		j = i + 1;
		while (j < sz && s[j] != NULL)
		{
			if (ft_atoi(s[i]) > ft_atoi(s[j]))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	duplicates(char **s, int sz)
{
	int	i;
	int	j;

	i = 0;
	while (i < sz && s[i] != NULL)
	{
		j = i + 1;
		while (j < sz && s[j] != NULL)
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static void	msj_error(void)
{
	ft_putstr_fd("Error\n", 2);
}

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
		msj_error();
	free(s);
}
