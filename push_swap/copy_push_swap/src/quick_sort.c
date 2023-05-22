/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:34:37 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/10 13:34:47 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quick_sort(t_list **a, t_list **b)
{
	t_util	*info;

	info = malloc(sizeof(t_util));
	info->min = find_min_index((*a));
	info->max = find_max_index((*a));
	info->mid = info->max / 2 + info->min;
	info->sia = ft_lstsize((*a));
	info->index = 0;
	info->partitions = 0;
	split_stack(a, b, info);
	while (!is_sorted((*a)) || ft_lstsize((*b)))
	{
		if (ft_lstsize((*b)))
			push_to_a(a, b, info);
		else
			push_to_b(a, b, info);
	}
	free(info);
}

void	split_stack(t_list **a, t_list **b, t_util *info)
{
	while (info->sia--)
	{
		if ((*a)->index <= info->mid)
			pb(a, b);
		else
		{
			if (ft_lstsize((*b)) > 1 && ((*b)->index < info->mid / 2))
				rr(a, b);
			else
				ra(a);
		}
	}
	info->max = info->mid;
	info->mid = (info->max - info->min) / 2 + info->min;
	info->partitions++;
}

void	push_to_a(t_list **a, t_list **b, t_util *info)
{
	int	i;

	i = 0;
	info->sib = ft_lstsize((*b));
	while (i < info->sib && ft_lstsize((*b)))
	{
		if ((*b)->index == info->index)
			next_index(a, b, info);
		else if ((*b)->index >= info->mid)
		{
			(*b)->sorted = info->partitions;
			pa(a, b);
		}
		else if ((*b)->index < info->mid)
			rb(b);
		i++;
	}
	info->max = info->mid;
	info->mid = (info->max - info->index) / 2 + info->index;
	info->partitions++;
}

void	next_index(t_list **a, t_list **b, t_util *info)
{
	if (ft_lstsize((*b)) > 0 && (*b)->index == info->index)
		pa(a, b);
	else if ((*a)->index == info->index)
	{
		(*a)->sorted = -1;
		ra(a);
		info->index++;
	}
	else if (ft_lstsize((*b)) > 2 && ft_lstlast((*b))->index == info->index)
		rrb(b);
	else if ((*a)->next->index == info->index)
		sa(a);
	else if (((*a)->next->index == info->index)
		&& ((*b)->next->index == info->index + 1))
		ss(a, b);
	else
		return ;
	next_index(a, b, info);
}

void	push_to_b(t_list **a, t_list **b, t_util *info)
{
	int	cur_partition;

	cur_partition = (*a)->sorted;
	if ((*a)->sorted > 0)
	{
		while ((*a)->sorted == cur_partition)
		{
			if ((*a)->index != info->index)
				pb(a, b);
			next_index(a, b, info);
		}
	}
	else if ((*a)->sorted == 0)
	{
		while ((*a)->sorted != -1)
		{
			if ((*a)->index != info->index)
				pb(a, b);
			next_index(a, b, info);
		}
	}
	if (ft_lstsize((*b)))
		info->max = find_max_index((*b));
	info->mid = (info->max - info->index) / 2 + info->index;
}
