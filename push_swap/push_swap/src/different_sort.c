/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   different_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:16:32 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 16:33:28 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ra_sa(t_stack *stack_a)
{
	ra(stack_a);
	sa(stack_a);
}

static void	sa_ra(t_stack *stack_a)
{
	sa(stack_a);
	ra(stack_a);
}

void	only_three(t_stack **stack_a, int len)
{
	if (descending_order(*stack_a))
		ra_sa(stack_a);
	else if (((*stack_a)->num < (*stack_a)->next->next->num)
			&& ((*stack_a)->next->next->num < (*stack_a)->next->num))
		sa_ra(stack_a);
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