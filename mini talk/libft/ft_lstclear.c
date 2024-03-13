/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:48:14 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/26 16:13:12 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack **lst, void (*del)(void*))
{
	t_stack	*cleanlst;
	t_stack	*temp;

	cleanlst = *lst;
	while (cleanlst)
	{
		temp = cleanlst->next;
		ft_lstdelone(cleanlst, del);
		cleanlst = temp;
	}
	*lst = NULL;
}
