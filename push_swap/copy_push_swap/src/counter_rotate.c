/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:33:10 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/10 13:33:12 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	counter_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*end;

	if (!(*lst) || !((*lst)->next))
		return ;
	tmp = *lst;
	end = ft_lstlast(*lst);
	while ((*lst)->next->next)
		*lst = (*lst)->next;
	end->next = tmp;
	(*lst)->next = NULL;
	*lst = end;
}

void	rra(t_list **lst)
{
	counter_rotate(lst);
	ft_printf("rra\n");
}

void	rrb(t_list **lst)
{
	counter_rotate(lst);
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	counter_rotate(a);
	counter_rotate(b);
	ft_printf("rrr\n");
}
