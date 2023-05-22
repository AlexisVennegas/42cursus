#include "../push_swap.h"

int ft_lstsize_list(t_stack *stack)
{
    size_t i;

    i = 0;
    while(stack)
    {
        stack = stack->next;
        i++;
    }
    return (i);
}

t_stack *ft_stack_new(int content)
{
    t_stack *newStack;

    newStack = malloc(sizeof(t_stack));
    if(!newStack)
        return (NULL);
    newStack->num = content;
    newStack->next = NULL;
    return (newStack);
}

t_stack *ft_lstlast_list(t_stack *stack)
{
    if(!stack)
        return (NULL);
    while(stack->next)
        stack = stack->next;
    return (stack);
}


void ft_add_back(t_stack **stack, t_stack *stack_new)
{
    t_stack *aux;

    if(!stack)
        return ;
    if(!*stack)
        *stack = stack_new;
    else 
        (ft_lstlast_list(*stack))->next = stack_new;
}