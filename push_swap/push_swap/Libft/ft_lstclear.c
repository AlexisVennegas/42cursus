/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:48:14 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 13:48:45 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nlst;
	t_list	*plst;

	if (!lst || !del)
		return ;
	nlst = *lst;
	plst = *lst;
	while (nlst)
	{
		plst = plst->next;
		del(nlst->content);
		free(nlst);
		nlst = plst;
	}
	*lst = NULL;
}
