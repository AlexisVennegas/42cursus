/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:33:31 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/10 13:33:32 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_list *lst)
{
	t_list	*temp;
	int		index;
	int		min;

	index = 0;
	temp = lst;
	while (index <= ft_lstsize(temp))
	{
		min = find_min(temp);
		assign_index(temp, index, min);
		index++;
	}
}

int	find_min(t_list *lst)
{
	t_list	*temp;
	int		min;

	temp = lst;
	min = 2147483647;
	while (temp)
	{
		if (temp->number < min && temp->index == -1)
			min = temp->number;
		temp = temp->next;
	}
	return (min);
}

void	assign_index(t_list *lst, int index, int min)
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		if (temp->number == min && temp->index == -1)
			temp->index = index;
		temp = temp->next;
	}
}
