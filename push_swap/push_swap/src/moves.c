/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:34:07 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 16:41:55 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"



void sa(t_stack **stack)
{
    swap_a(stack);
    ft_putstr_fd("sa\n", 1);
}

void ra(t_stack **stack)
{
    change(stack);
    ft_putstr_fd("ra\n", 1);
}