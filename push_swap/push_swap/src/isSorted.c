#include "../push_swap.h"

static void	principal(struct s_stack *stack_a)
{
	sa(stack_a);
	rra(&stack_a);
}
void	tertiary(struct s_stack *stack_a)
{
	sa(stack_a);
	ra(&stack_a);
}

struct s_stack	*onlyThree(struct s_stack *stack_a)
{
	if ((stack_a->num < stack_a->next->num)
		&& (stack_a->num < stack_a->next->next->num)
		&& (stack_a->next->num > stack_a->next->next->num))
		principal(&stack_a);
	else if ((stack_a->num < stack_a->next->num)
			&& (stack_a->num > stack_a->next->next->num)
			&& (stack_a->next->num < stack_a->next->next->num))
		sa(stack_a);
	else if ((stack_a->num < stack_a->next->num)
			&& (stack_a->num > stack_a->next->next->num)
			&& (stack_a->next->num > stack_a->next->next->num))
		rra(&stack_a);
	else if ((stack_a->num > stack_a->next->num)
			&& (stack_a->num > stack_a->next->next->num)
			&& (stack_a->next->num < stack_a->next->next->num))
		ra(&stack_a);
	else if ((stack_a->num > stack_a->next->num)
			&& (stack_a->next->num > stack_a->next->next->num))
		tertiary(&stack_a);
	return (stack_a);
}

int	isSorted(t_stack *stack_a)
{
	int i;
	i = stack_a->num;
	while (stack_a)
	{
		if (i > stack_a->num)
			return (0);
		i = stack_a->num;
		stack_a = stack_a->next;
	}
	return (1);
}