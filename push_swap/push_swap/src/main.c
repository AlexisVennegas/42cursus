/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:06:55 by avenegas          #+#    #+#             */
/*   Updated: 2023/06/05 19:13:17 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	msj_error(void)
{
	ft_putstr_fd("Error\n", 2);
}

void	free_all(char **s, int boolean)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	if (boolean)
		msj_error();
	free(s);
}

void	ft_leak(void)
{
	system("leaks push_swap");
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	cut_arguments(argc, argv);
	return (0);
}
