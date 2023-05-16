
#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef SAMPLE_LIB_H
# define SAMPLE_LIB_H
# define SIZE 50
# define UP		13
# define DOWN	1
# define LEFT	0
# define RIGHT	2
# define ESC	53



// estructuras

/* vector with an x and y */

typedef struct s_windowData
{
	void				*window;
	void				*mlx;
	void				*mlx_win;
	char				**map;
	int					bits_per_pixel;
	size_t				x;
	int					y;
}						t_windowData;

typedef struct resolution
{
	unsigned int		width;
	unsigned int		height;
}						t_resolution;

typedef struct s_vector
{
	int					x;
	int					y;
}						t_vector;
typedef struct s_block
{
	char				*name;
	char				*relative_path;
}						t_block;

typedef struct s_back
{
	void				*img_ptr;
	int					img_width;
	int					img_height;

}						t_bacK;

typedef struct s_data
{
	void				*img;
	char				*addr;
	int					bits_per_pixel;
	int					line_length;
	int					endian;
}						t_data;

/* A pointer to the window and its size */
typedef struct s_window
{
	void				*reference;
	t_vector			size;
}						t_window;

/* The 4 values that define a color */
typedef struct s_color
{
	int					r;
	int					g;
	int					b;
	int					a;
}						t_color;

/* all info needed for an image */
typedef struct s_image
{
	char				*relative_path;
	void				*reference;
	t_vector			size;
	void				*img;
	struct s_windowData	wlx;
	char				*pixels;
	int					bits_per_pixel;
	int					line_size;
	int					endian;
	int					img_height;
	int					img_width;
}						t_image;

typedef struct s_program
{
	void				*mlx;
	t_window			window;
	t_image				sprite;
	t_vector			sprite_position;
}						t_program;

// ---------------------------------
// FUNCTIONS

t_window				ft_new_window(void *mlx, int widht, int height,
							char *name);
t_image					ft_new_sprite(void *mlx, char *path);

t_color					new_color(int r, int g, int b, int a);
void					turn_img_to_color(t_image *image, t_color color);
char					*get_next_line(int fd);
int						ft_input(int key, void *program);
int						ft_update(void *param);
void					error(int i);
void					ft_check_map(t_windowData *data, char **argv);
int						ft_size_line(int fd);
int						ft_count_line(int fd);
void					create_map(t_windowData *data, char **argv);
char					*get_next_line(int fd);
t_block					set_image(char name);
void					*put_image(t_image img, int x, int y);
int						destroy_window(t_windowData *game);
void					map_destroy(t_windowData *game);
#endif
