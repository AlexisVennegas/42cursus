/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_modified.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:58:47 by avenegas          #+#    #+#             */
/*   Updated: 2023/08/02 13:48:38 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	descending_order(t_stack *stack)
{
	t_stack	*aux;

	aux = stack;
	while (aux && aux->next)
	{
		if (aux->num < aux->next->num)
			return (0);
		aux = aux->next;
	}
	return (1);
}

int	ft_atoi_modified(char *str, t_stack *error)
{
	int	i;
	int	s;
	int	negative;

	i = 0;
	s = 0;
	negative = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			negative = -1;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		s = s * 10 + (str[i] - '0');
		i++;
	}
	if ((s > 2147483647 && negative == 1) || (s > 2147483648 && negative == -1))
	{
		error->boolean_atoi = -1;
		return (negative * s);
	}
	return (negative * s);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}

void	rrb(t_stack **stack)
{
	reverse_rotate(stack);
	ft_putstr_fd("rrb\n", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap_a(stack_a);
	swap_a(stack_b);
	ft_putstr_fd("ss\n", 1);
}
