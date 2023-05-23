/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:03:11 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 16:39:57 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				boolean;
	int				check;
	int				num;
	int				id;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef struct s_data
{
	int				size;
	int				blocks;
	int				rg;
	int				i;
	int				count_temp;
	int				max;
	int				min;
	int				check;
}					t_data;

// main.c
int					main(int argc, char **argv);

// push_swap.c
void				cut_arguments(int argc, char **argv, char **ar);

// selection_sort.c
void				get_element(char **args);
// controls.c
void				free_all(char **s, int boolean);
int					sorted(char **s, int sz);
int					duplicates(char **s, int sz);
int					ft_atoi_modified(char *str, int error);
// stack.c
void				create_stacks(int count, char **ar, int num);
// get_number_id.c
void				get_number_id(t_stack *stack_a, int len);

// lstmain.c
void				ft_lstadd_back_modified(t_stack **lst, t_stack *new);
int					ft_lstsize_modified(t_stack *lst);
t_stack				*ft_lstlast_modified(t_stack *lst);
void				ft_lstadd_back_modified(t_stack **lst, t_stack *new);
int					descending_order(t_stack *stack);

void				exchange(t_stack **stack);
#endif