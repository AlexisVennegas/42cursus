/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:34:22 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/10 13:34:29 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*initialize_stack(int argc, char **argv)
{
	t_list	*a;
	t_list	*node;
	int		i;
	int		nbr;

	i = 0;
	a = NULL;
	while (i < argc)
	{
		node = malloc(sizeof(t_list));
		if (!node)
			return (NULL);
		node->atoierror = 0;
		nbr = ft_atoi(argv[i], node);
		node->next = NULL;
		node->number = nbr;
		node->index = -1;
		node->sorted = 0;
		ft_lstadd_back(&a, node);
		if (node->atoierror == -1)
			return (a);
		i++;
	}
	return (a);
}

void	select_sorting_method(t_list *a, int argc)
{
	t_list	*b;

	b = NULL;
	if (argc == 2 || argc == 3)
		sort_three(&a, argc);
	else if (argc == 4 || argc == 5)
		sort_five(&a, &b, argc);
	else
		quick_sort(&a, &b);
	ft_free(a, 0);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	char	**args;
	int		size;

	if (argc == 1)
		return (0);
	args = get_args(argc, argv);
	size = args_len(args);
	if (!check_args(size, args))
		return (0);
	a = initialize_stack(size, args);
	ft_free_args(args, 0);
	if (is_sorted(a) || !its_repeating(a) || ft_lstsize(a) != size)
	{
		if (!its_repeating(a) || ft_lstsize(a) != size)
			ft_printf("Error\n");
		ft_free(a, 0);
		return (0);
	}
	set_index(a);
	select_sorting_method(a, size);
	return (0);
}
