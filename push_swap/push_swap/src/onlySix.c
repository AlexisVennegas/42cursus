#include "../push_swap.h"

int	numberMin(struct s_stack *stack)
{
	int	min;

	min = stack->num;
	while (stack)
	{
		if (stack->num < min)
			min = stack->num;
		stack = stack->next;
	}
	return (min);
}

static void	cuartly(struct s_stack *stack_a)
{
	ra(&stack_a);
	sa(stack_a);
}

static void	doubleRra(struct s_stack *stack_a)
{
	rra(&stack_a);
	rra(&stack_a);
}

struct s_stack	*onlySix(struct s_stack *stack_a, struct s_stack *stack_b)
{
	if (stack_a->next->num == find_min(stack_a))
		sa(stack_a);
	if (stack_a->next->next->num == find_min(stack_a))
		tertiary(&stack_a);
	if (stack_a->next->next->next->num == find_min(stack_a))
		doubleRra(&stack_a);
	if (stack_a->next->next->next->next->num == find_min(stack_a))
		rra(&stack_a);
	pb(&stack_a, &stack_b);
	if (stack_a->next->num == find_min(stack_a))
		sa(stack_a);
	if (stack_a->next->next->num == find_min(stack_a))
		cuartly(&stack_a);
	if (stack_a->next->next->next->num == find_min(stack_a))
		rra(&stack_a);
	pb(&stack_a, &stack_b);
	stack_a = onlyThree(stack_a);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	return (stack_a);
}
