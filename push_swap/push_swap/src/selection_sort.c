/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:08:22 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/25 19:21:21 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	**aux;

	aux = &stack;
	ft_lstclear_modified(aux, free);
	return ;
}

void	selection_sort(t_stack *stack_a, int len)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (len == 2)
		only_two(&stack_a);
	else if (len == 3)
		only_three(&stack_a, len);
	else if (len == 4)
		only_four(&stack_a, &stack_b, len);
	else if (len == 5)
		only_five(&stack_a, &stack_b, len);
	else
		more_than_five(&stack_a, &stack_b);
	free_stack(stack_a);
}
