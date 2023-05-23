#include "../push_swap.h"

void	swap_a(t_stack **stack)
{
	t_stack	*aux;

	aux = *stack;
	if (!aux || !aux->next || !(*stack) || !(*stack)->next)
		return ;
	aux = *stack;
	*stack = (*stack)->next;
	aux->next = (*stack)->next;
	(*stack)->next = aux;
}

void change(t_stack **stack)
{
	t_stack	*aux;
	t_stack	*aux2;

	aux = *stack;
	if (!aux || !aux->next || !(*stack) || !(*stack)->next)
		return ;
	aux = *stack;
	aux2 = *stack;
	*stack = (*stack)->next;
	while (aux2->next)
		aux2 = aux2->next;
	aux2->next = aux;
	aux->next = NULL;
}