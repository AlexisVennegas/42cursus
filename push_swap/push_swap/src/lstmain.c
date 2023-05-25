/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:20:59 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/25 15:27:57 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstlast_modified_1(t_stack *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

static void	ft_lstdelone_modified(t_stack *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	free(lst);
}

void	ft_lstclear_modified(t_stack **lst, void (*del)(void *))
{
	t_stack	*cleanlst;
	t_stack	*temp;

	cleanlst = *lst;
	while (cleanlst)
	{
		temp = cleanlst->next;
		ft_lstdelone_modified(cleanlst, del);
		cleanlst = temp;
	}
	*lst = NULL;
}

int	ft_lstsize_modified(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_stack	*ft_lstlast_modified(t_stack *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	lstadd_mod(t_stack **lst, t_stack *new)
{
	t_stack	*node;

	if (*lst)
	{
		node = ft_lstlast_modified(*lst);
		node->next = new;
	}
	else
		*lst = new;
}
