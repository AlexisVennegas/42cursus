/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:32:35 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/17 16:59:59 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (!is_num(argv[i]))
		{
			ft_free_args(argv, 1);
			return (0);
		}
		i++;
	}
	if (argv[1] == NULL)
	{
		ft_free_args(argv, 0);
		return (0);
	}
	return (1);
}

int	is_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			return (0);
		i++;
	}
	return (1);
}

int	is_sorted(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp && temp->next)
	{
		if (temp->number > temp->next->number)
		{
			return (0);
		}
		temp = temp->next;
	}
	return (1);
}

int	is_rev_sorted(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp && temp->next)
	{
		if (temp->number < temp->next->number)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	its_repeating(t_list *lst)
{
	t_list	*current;
	t_list	*compare;

	current = lst;
	while (current)
	{
		compare = current->next;
		while (compare)
		{
			if (current->number == compare->number)
			{
				return (0);
			}
			compare = compare->next;
		}
		current = current->next;
	}
	return (1);
}
