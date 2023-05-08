#include "mlx_sample.h"

static t_resolution	ft_map(t_resolution *resolution)
{
	int x = 1980;
	int y = 1080;
	resolution->height = y;
	resolution->width = x;
	return (*resolution);
}

int	main(void)
{
	t_program		program;
	t_resolution	resolution;

	
	ft_map(&resolution);
	//estructura base del programa
	//init del programa, mlx_init regresa una key
	program.mlx = mlx_init();
	//se crea una ventana(key, width, height, "nombre del programa")
	program.window = ft_new_window(program.mlx, resolution.width,
			resolution.height, "Hello world!");
	//loop para crear la ventana
	mlx_loop(program.mlx);
}
