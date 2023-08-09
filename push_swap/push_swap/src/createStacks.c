/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createStacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:45:22 by avenegas          #+#    #+#             */
/*   Updated: 2023/08/02 16:03:36 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// genea la primera lista con los numeros que se le pasan por argumento
void	create_stacks(int len, char **ar)
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
		aux->boolean_atoi = 0;
		aux->num = ft_atoi_modified(ar[i], aux);
		aux->next = NULL;
		aux->id = -1;
		aux->check_sort = 0;
		ft_lstadd_back(&stack_a, aux);
		if (aux->boolean_atoi == -1)
			return (free_all(ar, 1));
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
