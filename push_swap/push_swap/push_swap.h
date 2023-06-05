/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:03:11 by avenegas          #+#    #+#             */
/*   Updated: 2023/06/05 10:56:57 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_data
{
	int	blocks;
	int	min;
	int	rg;
	int	max;
	int	size_a;
	int	size_b;
	int	index;
}		t_data;

// main.c
int		main(int argc, char **argv);

// push_swap.c
void	cut_arguments(int argc, char **argv);

// selection_sort.c
void	get_element(char **args, int len);
// controls.c
void	free_all(char **s, int boolean);
int		sorted(char **s, int sz);
int		duplicates(char **s, int sz);
int		ft_atoi_modified(char *str, t_stack *error);
// stack.c
void	create_stacks(int count, char **ar, int num);
// get_number_id.c
void	get_number_id(t_stack *stack_a, int len);
int		ft_lst_sorted(t_stack *stack);
// lstmain.c
void	sb(t_stack **stack_b);
void	only_three(t_stack **stack_a, int len);

int		descending_order(t_stack *stack);
void	selection_sort(t_stack *stack_a, int len);

void	ra(t_stack **stack);
void	sa(t_stack **stack);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack);
void	rotate_a(t_stack **stack);
void	divide_and_conquer(t_stack **stack_a, t_stack **stack_b, t_data *data);
void	only_five(t_stack **stack_a, t_stack **stack_b, int len);
void	swap_a(t_stack **stack);
void	swap_a(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);
int		max_list(t_stack *stack_a);
int		min_list(t_stack *stack_a);
void	rb(t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
int		control_error(char **s, int sz);
void	more_than_five(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate(t_stack **stack);
void	rotate(t_stack **stack);
void	c_i(t_stack **stack_a, t_stack **stack_b, t_data *data);
void	push_to_b(t_stack **stack_a, t_stack **stack_b, t_data *data);
void	push_to_a(t_stack **stack_a, t_stack **stack_b, t_data *data);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	ft_free_lst(t_stack *stack, int error);
void	print_stack(t_stack *stack_a, t_stack *stack_b);
#endif
