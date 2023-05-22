/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:33:25 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/10 13:33:27 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **a, int argc)
{
	if (argc == 2)
		sa(a);
	else
	{
		if (is_rev_sorted(*a))
		{
			ra(a);
			sa(a);
		}
		else if ((*a)->number < (*a)->next->next->number
			&& (*a)->next->next->number < (*a)->next->number)
		{
			sa(a);
			ra(a);
		}
		else if ((*a)->number > (*a)->next->number
			&& (*a)->number < (*a)->next->next->number)
			sa(a);
		else if ((*a)->number < (*a)->next->number
			&& (*a)->next->next->number < (*a)->number)
			rra(a);
		else if ((*a)->number > (*a)->next->next->number
			&& (*a)->next->number < (*a)->next->next->number)
			ra(a);
	}
}

void	sort_five(t_list **a, t_list **b, int argc)
{
	if (argc == 4)
	{
		while ((*a)->index != 0 && (*a)->index != 3)
			ra(a);
		pb(a, b);
		sort_three(a, 4);
		pa(a, b);
		if ((*a)->number > (*a)->next->number)
			ra(a);
	}
	else
	{
		while ((*a)->index != 0 && (*a)->index != 1)
			ra(a);
		pb(a, b);
		while ((*a)->index != 0 && (*a)->index != 1)
			ra(a);
		pb(a, b);
		sort_three(a, 4);
		pa(a, b);
		pa(a, b);
		if ((*a)->index > (*a)->next->index)
			sa(a);
	}
}
