/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:24:08 by avenegas          #+#    #+#             */
/*   Updated: 2023/06/19 21:13:39 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	c_i(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	if (ft_lstsize((*stack_b)) > 0 && (*stack_b)->id == data->index)
		pa(stack_a, stack_b);
	else if ((*stack_a)->id == data->index)
	{
		(*stack_a)->check_sort = -1;
		ra(stack_a);
		data->index++;
	}
	else if (ft_lstsize((*stack_b)) > 2
		&& ft_lstlast((*stack_b))->id == data->index)
		rrb(stack_b);
	else if ((*stack_a)->next->id == data->index)
		sa(stack_a);
	else if (((*stack_a)->next->id == data->index)
		&& ((*stack_b)->next->id == data->index + 1))
		ss(stack_a, stack_b);
	else
		return ;
	c_i(stack_a, stack_b, data);
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*aux;
	t_stack	*aux2;

	if (!(*stack) || !((*stack)->next))
		return ;
	aux = *stack;
	aux2 = ft_lstlast(*stack);
	while ((*stack)->next->next)
		*stack = (*stack)->next;
	aux2->next = aux;
	(*stack)->next = NULL;
	*stack = aux2;
}

void	rotate_a(t_stack **stack)
{
	t_stack	*aux;

	aux = *stack;
	if (!(*stack) || !((*stack)->next))
		return ;
	*stack = aux->next;
	aux->next = NULL;
	ft_lstlast(*stack)->next = aux;
}

void	push_to_a(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	int	i;

	i = 0;
	data->size_b = ft_lstsize((*stack_b));
	while (i < data->size_b && ft_lstsize((*stack_b)))
	{
		if ((*stack_b)->id == data->index)
			c_i(stack_a, stack_b, data);
		else if ((*stack_b)->id >= data->rg)
		{
			(*stack_b)->check_sort = data->blocks;
			pa(stack_a, stack_b);
		}
		else if ((*stack_b)->id < data->rg)
			rb(stack_b);
		i++;
	}
	data->max = data->rg;
	data->rg = (data->max - data->index) / 2 + data->index;
	data->blocks++;
}

void	push_to_b(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	int	divide;

	divide = (*stack_a)->check_sort;
	if ((*stack_a)->check_sort > 0)
	{
		while ((*stack_a)->check_sort == divide)
		{
			if ((*stack_a)->id != data->index)
				pb(stack_a, stack_b);
			c_i(stack_a, stack_b, data);
		}
	}
	else if ((*stack_a)->check_sort == 0)
	{
		while ((*stack_a)->check_sort != -1)
		{
			if ((*stack_a)->id != data->index)
				pb(stack_a, stack_b);
			c_i(stack_a, stack_b, data);
		}
	}
	if (ft_lstsize((*stack_b)))
		data->max = max_list((*stack_b));
	data->rg = (data->max - data->index) / 2 + data->index;
}
