/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:24:08 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/26 18:11:19 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	c_i(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	if (ft_lstsize((*stack_b)) > 0 && (*stack_b)->id == data->i)
		pa(stack_a, stack_b);
	else if ((*stack_a)->id == data->i)
	{
		(*stack_a)->check_sort = -1;
		ra(stack_a);
		data->i++;
	}
	else if (ft_lstsize((*stack_b)) > 2 && ft_lstlast((*stack_b))->id == data->i)
		rrb(stack_b);
	else if ((*stack_a)->next->id == data->i)
		sa(stack_a);
	else if ( ( (*stack_a)->next->id == data->i) && ((*stack_b)->next->id == data->i + 1))
		ss(stack_a, stack_b);
	else
		return ;
	c_i(stack_a, stack_a, data);
}

void	rotate(t_stack **stack)
{
	t_stack	*aux;

	aux = *stack;
	if (!(*stack) || !((*stack)->next))
		return ;
	*stack = aux->next;
	aux->next = NULL;
	ft_lstlast(*stack)->next = aux;
}

void	swap_a(t_stack **stack)
{
	t_stack	*aux;

	aux = *stack;
	if(!(*stack) || !(*stack)->next)
		return ;
	aux = *stack;
	*stack = (*stack)->next;
	aux->next = (*stack)->next;
	(*stack)->next = aux;
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*aux;
	t_stack	*aux2;

	aux = *stack;
	if (!aux || !aux->next || !(*stack) || !(*stack)->next)
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
	data->size = ft_lstsize((*stack_b));
	while (i < data->size && ft_lstsize((*stack_b)))
	{
		if ((*stack_b)->id == data->i)
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
	data->rg = (data->max - data->i) / 2 + data->i;
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
			if ((*stack_a)->id != data->i)
				pb(stack_a, stack_b);
			c_i(stack_a, stack_b, data);
		}
	}
	else if ((*stack_a)->check_sort == 0)
	{
		while ((*stack_a)->check_sort != -1)
		{
			if ((*stack_a)->id != data->i)
				pb(stack_a, stack_b);
			c_i(stack_a, stack_b, data);
		}
	}
	if (ft_lstsize((*stack_b)))
		data->max = max_list((*stack_b));
	data->rg = (data->max - data->i) / 2 + data->i;
}
