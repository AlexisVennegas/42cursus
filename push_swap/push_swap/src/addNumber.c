
#include "../push_swap.h"


int nbMax(struct s_stack *stack)
{
    int max;

    max = stack->num;
    while (stack)
    {
        if (stack->num > max)
            max = stack->num;
        stack = stack->next;
    }
    return (max);
} 



struct s_stack	*addNb(struct s_stack *stack, int number)
{
	struct s_stack *aux;
	aux->prev = NULL;
	aux->num = number;
	aux->next = NULL;
	stack = aux;
	return (stack);
}


struct s_stack *addNbLst(struct s_stack *stack, int number)
{
    struct s_stack *aux;
    aux->prev = NULL;
    aux->num = number;
    aux->next = stack;
    stack->prev = aux;
    stack = aux;
    return (stack);
}