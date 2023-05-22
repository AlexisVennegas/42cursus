/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:34:53 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/10 13:34:54 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swaps(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst) || !((*lst)->next))
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = (*lst)->next;
	(*lst)->next = tmp;
}

void	sa(t_list **a)
{
	swaps(a);
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	swaps(b);
	ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	swaps(a);
	swaps(b);
	ft_printf("ss\n");
}
