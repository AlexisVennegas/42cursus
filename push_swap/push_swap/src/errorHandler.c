#include "../push_swap.h"

void ft_free_aux(char **aux)
{
    char *tmp;
    if(!aux)
        return ;
    while(*aux)
    {
        tmp = *aux;
        aux++;
        free(tmp);
    }
    *aux = NULL;
}

void ft_freeList(t_stack **stack_a)
{
    t_stack *aux;

    if(!stack_a)
        return ;
    while(*stack_a)
    {
        aux = (*stack_a)->next;
        (*stack_a)->next = NULL;
        free(*stack_a);
        *stack_a = aux;
    }
}


void errorHandler(t_stack *stack_a, int i)
{
    if (i == 1)
    {
        ft_putstr_fd("Error\n", 1);
        exit(1);
    }
    else if(i == 2)
    {
        ft_freeList(&stack_a);
        ft_putstr_fd("Error\n", 1);
        exit(1);
    }
}