/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:33:20 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/10 13:33:21 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*push_b;

	if (!*b)
		return ;
	push_b = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = push_b;
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	t_list	*push_a;

	if (!*a)
		return ;
	push_a = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = push_a;
	ft_printf("pb\n");
}
