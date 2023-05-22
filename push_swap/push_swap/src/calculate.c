#include "../push_swap.h"

void	calculate(int argc, struct s_stack *stack_a, struct s_stack *stack_b)
{
	if (argc == 4)
		stack_a = onlyThree(stack_a);
	else if (argc == 6)
		stack_a = onlySix(stack_a, stack_b);
	else if (argc > 6)
		ft_sort(&stack_a, &stack_b);
}

struct s_stack	selectBlock(struct s_stack **stack_a, int min, int range)
{
	struct s_stack *aux;
	int i;

    i = 0;
    aux = addNb(aux, min);
    while(*stack_a && i < range - 1)
    {
        min = numberMin(*stack_a);
    }

}	