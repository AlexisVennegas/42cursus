/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number_id.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:52:34 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/25 19:19:45 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	min_number(t_stack *stack_a)
{
	t_stack	*aux;
	int		min;

	aux = stack_a;
	min = 2147483647;
	while (aux)
	{
		if (aux->num < min && aux->id == -1)
			min = aux->num;
		aux = aux->next;
	}
	return (min);
}

void	get_number_id(t_stack *stack_a, int len)
{
	t_stack	*aux;
	int		i;
	int		num;

	i = 0;
	num = 0;
	aux = stack_a;
	while (i <= ft_lstsize_modified(aux))
	{
		num = min_number(aux);
		while (aux)
		{
			if (aux->num == num && aux->id == -1)
				aux->id = i;
			aux = aux->next;
		}
		i++;
	}
	if (stack_a)
		selection_sort(stack_a, len);
}
