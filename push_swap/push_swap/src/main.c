/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:06:55 by avenegas          #+#    #+#             */
/*   Updated: 2023/08/02 16:02:57 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
// COMPROBAR LOS LEAKS DE MEMORIA
void	ft_leak(void)
{
	system("leaks push_swap");
}


// FUNCION PRINCIPAL MAIN DONDE LE LLEGAN LOS ARGUMENTOS 
int	main(int argc, char **argv)
{
	//atexit(ft_leak);
	if (argc == 1)
		return (0);
	cut_arguments(argc, argv);
	return (0);
}
