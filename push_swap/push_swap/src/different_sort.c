/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   different_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:16:32 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/25 15:23:32 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	only_two(t_stack **stack_a)
{
	if ((*stack_a)->num > (*stack_a)->next->num)
		sa(stack_a);
}

void	only_three(t_stack **stack_a, int len)
{
	if (descending_order(*stack_a))
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (((*stack_a)->num < (*stack_a)->next->next->num)
		&& ((*stack_a)->next->next->num < (*stack_a)->next->num))
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->num > (*stack_a)->next->num
		&& (*stack_a)->num < (*stack_a)->next->next->num)
		sa(stack_a);
	else if ((*stack_a)->num < (*stack_a)->next->num
		&& (*stack_a)->next->next->num < (*stack_a)->num)
		rra(stack_a);
	else if ((*stack_a)->num > (*stack_a)->next->next->num
		&& (*stack_a)->next->num < (*stack_a)->next->next->num)
		ra(stack_a);
}

void	only_four(t_stack **stack_a, t_stack **stack_b, int len)
{
	while ((*stack_a)->id != 0 && (*stack_a)->id != 3)
		ra(stack_a);
	pb(stack_a, stack_b);
	only_three(stack_a, len - 1);
	pa(stack_a, stack_b);
	if ((*stack_a)->num > (*stack_a)->next->num)
		ra(stack_a);
}

void	only_five(t_stack **stack_a, t_stack **stack_b, int len)
{
	while ((*stack_a)->id != 0 && (*stack_a)->id != 1)
		ra(stack_a);
	pb(stack_a, stack_b);
	while ((*stack_a)->id != 0 && (*stack_a)->id != 1)
		ra(stack_a);
	pb(stack_a, stack_b);
	only_three(stack_a, len - 2);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->id > (*stack_a)->next->id)
		ra(stack_a);
}
