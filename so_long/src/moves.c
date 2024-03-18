
#include "so_long.h"

void	move_up(t_game *game)
{
	update_position(game, 'w');
	if (game->map[game->player_y][game->player_x] == 'E'
		&& game->collectible == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->player_y + 1][game->player_x] = '0';
		game->winner = 1;
		game->moves++;
		ft_putstr("You won in ");
        ft_putnbr(game->moves);
		draw_map(game);
	}
	else if (game->map[game->player_y][game->player_x] == '1'
			|| game->map[game->player_y][game->player_x] == 'E')
		game->player_y += 1;
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->player_y][game->player_x] == 'C')
			game->collectible--;
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y + 1][game->player_x] = '0';
		game->moves++;
		draw_map(game);
	}
}

void	move_down(t_game *game)
{
	update_position(game, 's');
	if (game->map[game->player_y][game->player_x] == 'E'
		&& game->collectible == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->player_y - 1][game->player_x] = '0';
		game->winner = 1;
		game->moves++;
		ft_putstr("You won in ");
        ft_putnbr(game->moves);
		draw_map(game);
	}
	else if (game->map[game->player_y][game->player_x] == '1'
			|| game->map[game->player_y][game->player_x] == 'E')
		game->player_y -= 1;
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->player_y][game->player_x] == 'C')
			game->collectible--;
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y - 1][game->player_x] = '0';
		game->moves++;
		draw_map(game);
	}
}

void	move_left(t_game *game)
{
	update_position(game, 'a');
	if (game->map[game->player_y][game->player_x] == 'E'
		&& game->collectible == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->player_y][game->player_x + 1] = '0';
		game->winner = 1;
		game->moves++;
		ft_putstr("You won in ");
        ft_putnbr(game->moves);
		draw_map(game);
	}
	else if (game->map[game->player_y][game->player_x] == '1'
			|| game->map[game->player_y][game->player_x] == 'E')
		game->player_x += 1;
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->player_y][game->player_x] == 'C')
			game->collectible--;
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y][game->player_x + 1] = '0';
		game->moves++;
		draw_map(game);
	}
}

void	move_right(t_game *game)
{
	update_position(game, 'd');
	if (game->map[game->player_y][game->player_x] == 'E'
		&& game->collectible == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->player_y][game->player_x - 1] = '0';
		game->winner = 1;
		game->moves++;
		ft_putstr("You won in ");
        ft_putnbr(game->moves);
		draw_map(game);
	}
	else if (game->map[game->player_y][game->player_x] == '1'
			|| game->map[game->player_y][game->player_x] == 'E')
		game->player_x -= 1;
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->player_y][game->player_x] == 'C')
			game->collectible--;
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y][game->player_x - 1] = '0';
		game->moves++;
		draw_map(game);
	}
}
