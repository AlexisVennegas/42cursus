/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:34:05 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/10 13:34:08 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_util
{
	int	partitions;
	int	min;
	int	mid;
	int	max;
	int	sia;
	int	sib;
	int	moves;
	int	index;
}		t_util;

//Checks
int		check_args(int argc, char **argv);
int		is_num(char *str);
int		is_sorted(t_list *lst);
int		is_rev_sorted(t_list *lst);
int		its_repeating(t_list *lst);
//Build stack and index
int		find_min(t_list *lst);
int		find_max_index(t_list *lst);
int		find_min_index(t_list *lst);
int		args_len(char **args);
char	**get_args(int argc, char **argv);
void	next_index(t_list **a, t_list **b, t_util *info);
void	set_index(t_list *lst);
void	assign_index(t_list *lst, int index, int min);
t_list	*initialize_stack(int argc, char **argv);
//Free
void	ft_free(t_list *lst, int error);
void	ft_free_args(char **args, int error);
//Sorting
void	select_sorting_method(t_list *a, int argc);
void	sort_three(t_list **a, int argc);
void	sort_five(t_list **a, t_list **b, int argc);
void	quick_sort(t_list **a, t_list **b);
void	split_stack(t_list **a, t_list **b, t_util *info);
void	push_to_a(t_list **a, t_list **b, t_util *info);
void	push_to_b(t_list **a, t_list **b, t_util *info);
//Printing
void	print_stacks(t_list *a, t_list *b, t_util *info);
//Movements
void	swaps(t_list **lst);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	rotate(t_list **lst);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	counter_rotate(t_list **lst);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);

#endif
