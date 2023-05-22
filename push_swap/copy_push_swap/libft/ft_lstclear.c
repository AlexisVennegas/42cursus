/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:57:09 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 15:17:56 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cleanlst;
	t_list	*temp;

	cleanlst = *lst;
	while (cleanlst)
	{
		temp = cleanlst->next;
		ft_lstdelone(cleanlst, del);
		cleanlst = temp;
	}
	*lst = NULL;
}
