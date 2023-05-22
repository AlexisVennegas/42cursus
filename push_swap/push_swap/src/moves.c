#include "../push_swap.h"


void unic_three(t_stack **stack_a, t_stack **stack_b)
{
    int i;
    t_stack *aux;

    while(ft_lstsize_list(*stack_a) > 3 && !isSorted(*stack_a))
    {
        aux = *stack_a;
        i = calculate(*stack_a, *stack_b);
        while(i >= 0)
        {
            if(i == )
        }
}

void pb(t_stack **a, t_stack **b, int j)
{
    t_stack *aux;

    if(!*a)
        return ;
    aux = *b;
    *b = *a;
    *a = (*a)->next;
    (*b)->next = aux;
    if(j == 0)
        write(1, "pb\n", 3);
}

void sa(t_stack **a, int j)
{
    t_stack *aux;

    if(!*a || !(*a)->next)
        return ;
    aux = *a;
    *a = (*a)->next;
    aux->next = (*a)->next;
    (*a)->next = aux;
    if(j == 0)
        write(1, "sa\n", 3);
}