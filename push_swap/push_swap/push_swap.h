#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
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
}					t_data;

// controlError.c functions
t_stack				*controlError(int argc, char **argv);

// errorHandler.c functions
void				errorHandler(t_stack *stack_a, int i);

// oneArgument.c functions
t_stack				*oneArgument(char **argv);

// freeList.c functions
void				ft_freeList(t_stack **stack_a);

// LIST FUNCTIONS

void				ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack				*ft_lstlast_list(t_stack *stack);
t_stack				*ft_stack_new(int content);
int					duplicate(t_stack *stack_a);
int					ft_lstsize_list(t_stack *stack);
t_stack				*oneArgument(char **argv);
// ft_atoi_modified.c functions
int					ft_atoi_modified(const char *str);

// isSorted.c functions
int					isSorted(t_stack *stack_a);

// sort.c functions
struct s_stack		*ft_sort(t_stack **stack_a, t_stack **stack_b);

// swap.c functions
struct s_stack		*onlyThree(struct s_stack *stack_a);
void				calculate(int argc, struct s_stack *stack_a,
						struct s_stack *stack_b);
int					nbMax(struct s_stack *stack);
int					numberMin(struct s_stack *stack);