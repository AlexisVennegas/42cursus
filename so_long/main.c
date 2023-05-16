#include "mlx_sample.h"

void	map_destroy(t_windowData	*game)
{
	int	y;

	y = 0;
	while (game->map[y])
	{
		free(game->map[y]);
		y++;
	}
}
int	destroy_window(t_windowData *game)
{
	mlx_destroy_window(game->mlx, game->window);
	error(0);
	map_destroy(game);
	exit(0);
}


int	main(int argc, char **argv)
{
	t_windowData	data;

	if (argc != 2)
		return (error(3), 0);
	ft_check_map(&data, argv);
	data.mlx = mlx_init();
	data.window = mlx_new_window(data.mlx, data.x, data.y, "Game 2D");
	
	create_map(&data, argv);



	//estructura base del programa
	//init del programa, mlx_init regresa una key
	//se crea una ventana(key, width, height, "nombre del programa")
	// seleccionamos nuestro .xpm y le damos unas coordenadas
	//program.sprite = ft_new_sprite(data.mlx, "./assets/example.xpm");
	//program.sprite_position.x = 0;
	//program.sprite_position.y = 0;
	//pinta nuestro mono en la windows
	/*	backGround.img_ptr = mlx_xpm_file_to_image(program.mlx,
				"background.png",
			&backGround.img_width, &backGround.img_height);
	mlx_put_image_to_window(program.mlx, program.window.reference,
			backGround.img_ptr, 10, 10);

	mlx_put_image_to_window(data.mlx, program.window.reference,
			program.sprite.reference, program.sprite_position.x,
			program.sprite_position.y);
	//movimiento pa
	*/
	mlx_key_hook(data.window, *ft_input, &data);
	// hook a function to the loop (it would be called each frame)
	//loop para crear la ventana
	mlx_loop(data.mlx);
}
