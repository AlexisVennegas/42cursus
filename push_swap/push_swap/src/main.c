/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:06:55 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/18 09:43:02 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_leak(void)
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
