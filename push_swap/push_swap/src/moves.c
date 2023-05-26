/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:34:07 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/26 18:07:25 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}
void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
}

void	sa(t_stack **stack)
{
	swap_a(stack);
	ft_putstr_fd("sa\n", 1);
}

void	ra(t_stack **stack)
{
	rotate_a(stack);
	ft_putstr_fd("ra\n", 1);
}

void	rra(t_stack **stack)
{
	reverse_rotate(stack);
	ft_putstr_fd("rra\n", 1);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;

	if (!*stack_a)
		return ;
	aux = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = aux;
	ft_putstr_fd("pb\n", 1);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;

	if (!*stack_b)
		return ;
	aux = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = aux;
	ft_putstr_fd("pa\n", 1);
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
	ft_putstr_fd("rrr\n", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap_a(stack_a);
	swap_a(stack_b);
	ft_putstr_fd("ss\n", 1);
}
