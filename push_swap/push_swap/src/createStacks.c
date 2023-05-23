/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createStacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:45:22 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 16:13:14 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	free_argc(char **argv)
{
	int	i;

	i = 0;
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	return ;
}

void	create_stacks(int len, char **ar, int num)
{
	t_stack	*stack_a;
	t_stack	*aux;
	int		i;

	i = 0;
	stack_a = NULL;
	aux->boolean = 0;
	while (i < len)
	{
		aux = (t_stack *)malloc(sizeof(t_stack));
		if (!aux)
			return ;
		num = ft_atoi_modified(ar[i], 0);
		aux->next = NULL;
		aux->num = num;
		aux->id = -1;
		aux->check = 0;
		ft_lstadd_back_modified(&stack_a, aux);
		if (!num)
			return ;
		i++;
	}
	free_argc(ar);
	get_number_id(stack_a, len);
	return ;
}
