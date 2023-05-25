/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:24:08 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/25 19:27:43 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*aux;

	aux = *stack;
	if (!aux || !aux->next || !(*stack) || !(*stack)->next)
		return ;
	*stack = aux->next;
	aux->next = NULL;
	ft_lstadd_back_modified(stack, aux);
}

void	swap_a(t_stack **stack)
{
	t_stack	*aux;

	aux = *stack;
	if (!aux || !aux->next || !(*stack) || !(*stack)->next)
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
	aux2 = ft_lstlast_modified(*stack);
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
	if (!aux || !aux->next || !(*stack) || !(*stack)->next)
		return ;
	*stack = aux->next;
	aux->next = NULL;
	ft_lstlast_modified(*stack)->next = aux;
}

void	push_a(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	int	i;

	i = 0;
	data->size = ft_lstsize_modified(*stack_b);
	while (i < data->size && ft_lstsize_modified(*stack_b))
	{
		if ((*stack_b)->id == data->min)
		{
			pa(stack_a, stack_b);
			data->min++;
			i++;
		}
		else if ((*stack_b)->id == data->max)
		{
			pa(stack_a, stack_b);
			data->max--;
			i++;
		}
		/*
		else
			rrb(stack_b);
		*/
	}
}
