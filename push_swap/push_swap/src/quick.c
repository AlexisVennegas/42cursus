/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:34:07 by avenegas          #+#    #+#             */
/*   Updated: 2023/07/29 16:39:17 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lst_sorted(t_stack *stack)
{
	t_stack	*aux;

	aux = stack;
	while (aux && aux->next)
	{
		if (aux->num > aux->next->num)
			return (0);
		aux = aux->next;
	}
	return (1);
}

void	print_stack(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*aux_a;
	t_stack	*aux_b;

	aux_a = stack_a;
	aux_b = stack_b;
	ft_putstr_fd("stack_a: ", 1);
	while (aux_a)
	{
		ft_putnbr_fd(aux_a->num, 1);
		ft_putstr_fd(" ", 1);
		aux_a = aux_a->next;
	}
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("stack_b: ", 1);
	while (aux_b)
	{
		ft_putnbr_fd(aux_b->num, 1);
		ft_putstr_fd(" ", 1);
		aux_b = aux_b->next;
	}
	ft_putstr_fd("\n", 1);
}

void	more_than_five(t_stack **stack_a, t_stack **stack_b)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return ;
	data->min = min_list((*stack_a));
	data->max = max_list((*stack_a));
	data->rg = data->max / 2 + data->min;
	data->size_a = ft_lstsize((*stack_a));
	data->index = 0;
	data->blocks = 0;
	divide_and_conquer(stack_a, stack_b, data);
	print_stack((*stack_a), (*stack_b));
	while (ft_lst_sorted((*stack_a)) == 0 || ft_lstsize((*stack_b)))
	{
		if (ft_lstsize((*stack_b)))
			push_to_a(stack_a, stack_b, data);
		else
			push_to_b(stack_a, stack_b, data);
	}
	free(data);
	return ;
}

void	divide_and_conquer(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	while (data->size_a--)
	{
		print_stack((*stack_a), (*stack_b));
		if ((*stack_a)->id <= data->rg)
			pb(stack_a, stack_b);
		else
		{
			if (ft_lstsize((*stack_b)) > 1 && ((*stack_b))->id < data->rg / 2)
				rr(stack_a, stack_b);
			else
				ra(stack_a);
		}
	}
	data->max = data->rg;
	data->rg = (data->max - data->min) / 2 + data->min;
	data->blocks++;
}
