/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:34:15 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/10 13:34:17 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void    print_stacks(t_list *a, t_list *b, t_util *info)
{
	t_list	*temp;
	int		max;

    ft_printf("STACK A                                  STACK B\n");
    while (a || b)
    {
        if (a && b)
        {
            ft_printf("Number:  %d, Index:  %d, Sorted:  %d     Number:  %d,
		Index:  %d, Sorted:  %d\n", a->number, a->index, a->sorted, b->number,
		b->index, b->sorted);
            a = a->next;
            b = b->next;
        }
        else if (a && !b)
        {
            ft_printf("Number:  %d, Index:  %d, Sorted:  %d\n", a->number,
		a->index, a->sorted);
            a = a->next;
        }
        else if (!a && b)
        {
            ft_printf("                                         Number:  %d,
		Index:  %d, Sorted:  %d\n", b->number, b->index, b->sorted);
            b = b->next;
        }
    }
    ft_printf("                                                 Max: %d, Mid:
		%d, Min: %d \n", info->max, info->mid, info->index);
}*/
int	find_max_index(t_list *lst)
{
	t_list	*temp;
	int		max;

	temp = lst;
	max = 0;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}

int	find_min_index(t_list *lst)
{
	t_list	*temp;
	int		min;

	temp = lst;
	min = ft_lstsize(lst) + 1;
	while (temp)
	{
		if (temp->index < min)
			min = temp->index;
		temp = temp->next;
	}
	return (min);
}

void	ft_free(t_list *lst, int error)
{
	t_list	**temp;

	temp = &lst;
	ft_lstclear(temp, free);
	if (error)
		ft_printf("%s\n", "Error");
}
