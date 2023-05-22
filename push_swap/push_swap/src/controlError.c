#include "../push_swap.h"

t_stack *controlError(int argc, char **argv)
{
    t_stack *stack_a;
    int j;
    int i;

    i = 1;
    stack_a = NULL;
    if (argc < 2)
       errorHandler(NULL, 1);
    if (argc == 2)
        stack_a = oneArgument(argv);
    else
    {
        // argv son mas de 2
        while (i < argc)
        {
            j = ft_atoi_modified(argv[i]);
            ft_add_back(&stack_a, ft_stack_new(j));
            i++;
        }        
    }
    return (stack_a);
}



int duplicate(t_stack *stack_a)
{
    t_stack *aux;

    while(stack_a)
    {
        aux = stack_a->next;
        while(aux)
        {
            if(stack_a->num == aux->num)
                return (1);
            aux = aux->next;
        }
        stack_a = stack_a->next;
    }
    return (0);
}