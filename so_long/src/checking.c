/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:09:28 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/18 14:24:09 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// esto es para verificar que el archivo sea valido con la extension .ber
int	check_argv(char *argv)
{
	int	i;

	i = 0;
	if (!argv)
		return (0);
	while (argv[i])
		i++;
	if (argv[i - 1] == 'r' && argv[i - 2] == 'e' && argv[i - 3] == 'b' && argv[i
		- 4] == '.') //
		return (1);
	ft_putstr_fd("Error, el archivo no es valido\n", 2);
	return (0);
}


void key_press(int keycode, t_game *data_game)
{
	if (keycode == KEY_W || keycode == KEY_UP)
	{
		data_game->player_y -= 1;	
		move_up(data_game);
	}
	else if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		data_game->player_x -= 1;
		move_left(data_game);
	}
	else if (keycode == KEY_S || keycode == KEY_DOWN)
	{
		data_game->player_y += 1;
		move_down(data_game);
	}
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
	{
		data_game->player_x += 1;
		move_right(data_game);
	}
}