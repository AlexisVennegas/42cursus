#include "../push_swap.h"

t_stack *oneArgument(char **argv)
{
    t_stack *stack_a;
    char **aux;
    int i;
    int j;

    stack_a = NULL;
    i = 0;
    aux = ft_split(argv[1], ' ');
    while(aux[i])
    {
        j = ft_atoi_modified(aux[i]);
        ft_add_back(&stack_a, ft_newNode(j));
        i++;
    }
    ft_free_aux(aux);
    free(aux);
    return(stack_a);
}
