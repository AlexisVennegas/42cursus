#include "mlx_sample.h"

int	ft_input(int key, void *param)
{
	t_program		*program;
	t_windowData	*data;

	data = (t_windowData *)param;
	program = (t_program *)param;
	// mlx function that clears the window
	mlx_clear_window(data->mlx, program->window.reference);
	// move in a direction based on the key
	if (key == RIGHT)
		program->sprite_position.x += program->sprite.size.x;
	else if (key == LEFT)
		program->sprite_position.x -= program->sprite.size.x;
	else if (key == DOWN)
		program->sprite_position.y += program->sprite.size.y;
	else if (key == UP)
		program->sprite_position.y -= program->sprite.size.y;
	// change color based on keys R, G and B.
	else if (key == ESC)
		destroy_window(data);
	// mlx function that puts and image into a window at a given position
	// (the position 0,0 is the upper-left corner)
	mlx_put_image_to_window(program->mlx, program->window.reference,
			program->sprite.reference, program->sprite_position.x,
			program->sprite_position.y);
	// print the key pressed so you know the number of each key
	printf("Key pressed -> %d\n", key);
	return (0);
}

