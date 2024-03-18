
#include "so_long.h"

static void	eject_images(t_game *data_game)
{
	data_game->error = 0;
	data_game->img_background = mlx_xpm_file_to_image(data_game->mlx,
			"assets/example.xpm", &data_game->img_width,
			&data_game->img_height);
	data_game->img_wall = mlx_xpm_file_to_image(data_game->mlx, "assets/example.xpm",
			&data_game->img_width, &data_game->img_height);
	// carga el jugador
	data_game->img_player = mlx_xpm_file_to_image(data_game->mlx,
			"assets/example.xpm", &data_game->img_width, &data_game->img_height);
	// carga la salida
	data_game->img_exit = mlx_xpm_file_to_image(data_game->mlx, "assets/example.xpm",
			&data_game->img_width, &data_game->img_height);
	// carga los coleccionables
	data_game->img_collectible = mlx_xpm_file_to_image(data_game->mlx,
			"assets/example.xpm", &data_game->img_width,
			&data_game->img_height);
	// verifica que las imagenes se hayan cargado correctamente
	if (!data_game->img_background || !data_game->img_wall
		|| !data_game->img_player || !data_game->img_exit
		|| !data_game->img_collectible)
	{
		ft_putstr_fd("Error: Invalid Texture!\n", 2);
		data_game->error = -1;
	}
}

// inicializa la ventana del juego
static	void init_window(t_game *data_game)
{
	int	i;

	i = 0;
	data_game->img_width = ft_strlen(data_game->map[0]) * 32;
	while (data_game->map[i])
		i++;
	data_game->img_height = i * 32;
}

// carga las imagenes necesarias para el juego
void	init_game(t_game *data_game)
{
	data_game->mlx = mlx_init();
	init_window(data_game);
	data_game->win = mlx_new_window(data_game->mlx, data_game->img_width,
			data_game->img_height, "so_long");
	data_game->moves = 0;
	data_game->winner = 0;
	eject_images(data_game);
	if (data_game->error == 1)
	{
		ft_putstr_fd("Error, no se pudo cargar las imagenes\n", 2);
		free_arr(data_game->map);
		mlx_destroy_window(data_game->mlx, data_game->win);
		mlx_destroy(data_game->mlx);
		system("leaks -q so_long");
		exit(0);
	}
	loop_draw_game(data_game);
}