/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:08:22 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 16:18:58 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*aux;

	aux = &stack;
	ft_lstclear_modified(aux, free);
	return ;
}

void	selection_sort(t_stack *stack_a, int len)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (len == 2)
		 sa(stack_a);
    else if(len == 3)
        only_three(&stack_a, len);
	else if (len == 4 || len == 5)
		only_numbers(&stack_a, &stack_b);
	else
		more_than_five(&stack_a, &stack_b);
	free_stack(stack_a);
}
