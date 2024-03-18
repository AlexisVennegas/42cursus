/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:16:22 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/18 14:11:49 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game data_game;

	if (argc != 2)
		ft_putstr_fd("Error, argumentos invalidos\n", 2);
	else
	{
		data_game.map = read_map(argv[1]);
		if (data_game.map == NULL || data_game.map[0] == NULL)
			ft_putstr_fd("Error, no se pudo leer el archivo\n", 2);
		if (check_argv(argv[1]) && check_map(&data_game)
			&& check_path(&data_game))
		{
			init_game(&data_game);
			play_time(&data_game);
			mlx_loop(data_game.mlx);
		}
		else
		{
			ft_putstr_fd("Error, el archivo no es valido\n", 2);
			if (data_game.map)
				free_arr(data_game.map);
			return (0);
		}
	}
	return (0);
}
