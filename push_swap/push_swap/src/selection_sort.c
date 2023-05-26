/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:08:22 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/26 17:33:29 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_free_lst(t_stack *stack, int error)
{
	t_stack	**temp;

	temp = &stack;
	ft_lstclear(temp, free);
	if (error)
		ft_putstr_fd("Error\n", 1);
	return ;
}

void	free_stack(t_stack *stack)
{
	t_stack	**aux;

	aux = &stack;
	ft_lstclear(aux, free);
	return ;
}

void	selection_sort(t_stack *stack_a, int len)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (len == 2 || len == 3)
		only_three(&stack_a, len);
	else if (len == 4 || len == 5)
		only_five(&stack_a, &stack_b, len);
	else
		more_than_five(&stack_a, &stack_b);
	ft_free_lst(stack_a, 0);
}
