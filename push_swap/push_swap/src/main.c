
#include "../push_swap.h"

void	ft_arguments(int argc, char **argv, struct s_stack **stack_a)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (i < argc - 1)
	{
		aux = ft_atoi_modified(argv[argc - 1 - i]);
		if (stack_a == NULL && aux != 0)
			stack_a = addNb(stack_a, aux);
		else
			stack_a = addNbLst(stack_a, aux);
		i++;
	}
}

int	main(int argc, char **argv)
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	else
	    ft_arguments(argc, argv, &stack_a);
    if(!stack_a || duplicate(stack_a) || isSorted(stack_a))
        errorHandler(stack_a, 2);
    if(argc)
        calculate(argc, &stack_a, &stack_b);
}

/*
int	main(int argc, char **argv)
{
    t_stack *stack_a;   
    stack_a = controlError(argc, argv);
    // checa si hay duplicados o si stack_a es NULL 
    if (!stack_a || duplicate(stack_a))
        errorHandler(stack_a, 2);
    // checa si stack_a es ordenado
    if(!isSorted(stack_a))
        ft_sort(&stack_a);
}
*/