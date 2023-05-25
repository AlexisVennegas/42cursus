/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:34:07 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 16:41:55 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"




void	divide_and_conquer(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	while (data->size--)
	{
		if ((*stack_a)->id <= data->rg)
			pb(stack_a, stack_b);
		else
		{
			if (ft_lstsize_modified(*stack_b) > 1 && (*stack_b)->id < data->rg
				/ 2)
				rr(stack_a, stack_b);
			else
				ra(stack_a);
		}
	}
	data->max = data->rg;
	data->rg = (data->max - data->min) / 2 + data->min;
	data->blocks++;
}

void	more_than_five(t_stack **stack_a, t_stack **stack_b)
{
	t_data *data;

	data = malloc(sizeof(t_data));
	data->min = min_list(*stack_a);
	data->max = max_list(*stack_a);
	data->rg = data->max / data->min;
	data->size = ft_lstsize_modified(*stack_a);
	data->blocks = 0;
	data->i = 0;
	divide_and_conquer(stack_a, stack_b, data);
    while (!ft_lstsorted(*stack_a) || ft_lstsize_modified(*stack_b))
    {
        if (ft_lstsize_modified(*stack_b))
            push_to_a(stack_a, stack_b, data);
        else
            push_to_b(stack_a, stack_b, data);
    }
    free(data);
}