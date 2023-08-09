/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:08:22 by avenegas          #+#    #+#             */
/*   Updated: 2023/08/09 14:34:10 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_lst(t_stack *stack, int error)
{
	t_stack	**temp;

	temp = &stack;
	ft_lstclear(temp, free);
	if (error)
		ft_putstr_fd("Error\n", 1);
	return ;
}

// distintos metodos para ordenar la lista
void	selection_sort(t_stack *stack_a, int len)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (len == 2 || len == 3)
		only_three(&stack_a, len);
	else if (len == 4 || len == 5)
		only_five(&stack_a, &stack_b, len);
	else
		radix_sort(&stack_a, &stack_b);
	ft_free_lst(stack_a, 0);
	return ;
}

// calcular la cantidad máxima de bits necesarios para representar el valor del mayor ID
//esta función ayuda a determinar la cantidad de pasos (iteraciones) que se necesitarán en el proceso de radix sort.
static int	bits_max_id(t_stack **stack)
{
	t_stack	*aux;
	int		max_id;
	int		max_bits;

	aux = *stack;
	max_id = aux->id;
	max_bits = 0;
	while (aux != NULL)
	{
		if (aux->id > max_id)
			max_id = aux->id;
		aux = aux->next;
	}
	while ((max_id >> max_bits) != 0)
	{
		//printf("hola max_id >> max_bits: %d\n", (max_id >> max_bits));
		//print_binary(max_id >> max_bits);		
		//printf("\n");
		max_bits++;
	}
	return (max_bits);
}

void print_binary(int num) 
{
    int size = sizeof(num) * 8; // Tamaño en bits del número
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}


void radix_sort(t_stack **stack_a, t_stack **stack_b) 
{
    t_stack *aux;
    int process;
    int j;
    int size;
    int max_bits_id;

    process = 0;
    aux = *stack_a;
    size = ft_lstsize(aux);
    max_bits_id = bits_max_id(stack_a);
    //printf("total - max_bits: %d\n", max_bits_id);
    //print_stack(*stack_a, *stack_b);
    while (process < max_bits_id) {
        j = 0;
        while (j++ < size) 
		{
        	aux = *stack_a;
			//printf("id a juzgar: %d\n", aux->id);
			//print_binary(aux->id);
			//printf("\n");
			//printf("bit a juzgar: %d\n", ((aux->id >> process) & 1));
            if (((aux->id >> process) & 1) == 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
			//print_stack(*stack_a, *stack_b);
        }
        while (ft_lstsize(*stack_b) != 0) {
            pa(stack_a, stack_b);
        }
		//printf("asi quedan los stacks: \n");
		//print_stack(*stack_a, *stack_b);
    	process++;
    }
}
