/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controlError.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:34:46 by avenegas          #+#    #+#             */
/*   Updated: 2023/06/05 17:46:29 by avenegas         ###   ########.fr       */
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
