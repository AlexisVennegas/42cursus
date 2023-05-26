/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createStacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:45:22 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/26 17:44:04 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	create_stacks(int len, char **ar, int num)
{
	t_stack	*stack_a;
	t_stack	*aux;
	int		i;

	i = 0;
	stack_a = NULL;
	aux = NULL;
	while (i < len)
	{
		aux = (t_stack *)malloc(sizeof(t_stack));
		if (!aux)
			return ;
		aux->boolean = 0;
		num = ft_atoi_modified(ar[i], aux->boolean);
		if (aux->boolean == 1)
			return (free_all(ar, 0), get_number_id(stack_a, len));
		aux->next = NULL;
		aux->num = num;
		aux->id = -1;
		aux->check_sort = 0;
		ft_lstadd_back(&stack_a, aux);
		i++;
	}
	return (free_all(ar, 0), get_number_id(stack_a, len));
}

int	max_list(t_stack *stack_a)
{
	t_stack	*aux;
	int		max;

	aux = stack_a;
	max = 0;
	while (aux)
	{
		if (aux->id > max)
			max = aux->id;
		aux = aux->next;
	}
	return (max);
}

int	min_list(t_stack *stack_a)
{
	t_stack	*aux;
	int		min;

	aux = stack_a;
	min = ft_lstsize(aux) + 1;
	while (aux)
	{
		if (aux->id < min)
			min = aux->id;
		aux = aux->next;
	}
	return (min);
}
