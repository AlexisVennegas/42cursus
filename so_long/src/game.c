
#include "so_long.h"

static void	img_to_window(t_game *data_game, int x, int y)
{
	if (data_game->map[y][x] == '1')
		mlx_put_image_to_window(data_game->mlx, data_game->win,
			data_game->img_wall, x * 32, y * 32);
	else if (data_game->map[y][x] == '0')
		mlx_put_image_to_window(data_game->mlx, data_game->win,
			data_game->img_background, x * 32, y * 32);
	else if (data_game->map[y][x] == 'P')
		mlx_put_image_to_window(data_game->mlx,
			data_game->win, data_game->img_player, x * 32, y * 32);
	else if (data_game->map[y][x] == 'C')
		mlx_put_image_to_window(data_game->mlx,
			data_game->win, data_game->img_collectible, x * 32, y * 32);
	else if (data_game->map[y][x] == 'E')
		mlx_put_image_to_window(data_game->mlx,
			data_game->win, data_game->img_exit, x * 32, y * 32);
}

int draw_map(t_game *data_game)
{
	int	x;
	int	y;

	y = 0;
	while (data_game->map[y])
	{
		x = 0;
		while (data_game->map[y][x])
		{
			img_to_window(data_game, x, y);
			x++;
		}
		y++;
	}
	show_moves(data_game);
	return (0);
}




int loop_draw_game(t_game *data_game)
{
    int	x;
	int	y;

	y = 0;
	while (data_game->map[y])
	{
		x = 0;
		while (data_game->map[y][x])
		{
			img_to_window(data_game, x, y);
			x++;
		}
		y++;
	}
	show_moves(data_game);
	return (0);
}
int	key_hook(int keycode, t_game *data_game)
{
	if (!data_game)
		return (0);
	else if (keycode == KEY_ESC || keycode == KEY_Q)
		close_game(data_game);
	else if (data_game->winner == 0)
	{
		ft_putstr("moves: ");
		ft_putnbr_fd(data_game->moves, 1);
		key_press(keycode, data_game);
	}
	else if (data_game->winner == 1)
	{
		ft_putstr("You won in moves!", 1);
		ft_putnbr_fd(data_game->moves, 1);
		close_game(data_game);
	}
	return (0);
}

void play_time(t_game *data_game)
{
	mlx_hook(data_game->win, 2, 1L << 0, key_hook, data_game);
	mlx_hook(data_game->win, 17, 1L << 17, close_game, data_game);
	mlx_hook(data_game->win, 9, 1L << 21, draw_map, data_game);
}