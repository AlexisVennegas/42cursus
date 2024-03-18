/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:24:31 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/18 14:39:26 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../minilibx_opengl_20191021/mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_game
{
	void	*mlx;
	void	*win;
	void	*img_background;
	void	*img_wall;
	void	*img_player;
	void	*img_exit;
	void	*img_collectible;
	char	**map;
	int		valid_path;
	int		map_width;
	int		map_height;
	int		img_width;
	int		img_height;
	int		player_x;
	int		player_y;
	int		collectible;
	int		player;
	int		exit;
	int		moves;
	int		error;
	int		winner;
}			t_game;

# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2

# define KEY_UP 126
# define KEY_LEFT 123
# define KEY_DOWN 125
# define KEY_RIGHT 124

# define KEY_ESC 53
# define KEY_Q 12

char		**read_map(char *file);
int			check_argv(char *argv);
int			check_map(t_game *data_game);
void		init_game(t_game *data_game);
void		free_arr(char **map);
int			loop_draw_game(t_game *data_game);
void		show_moves(t_game *game);
int			close_game(t_game *data_game);
void		play_time(t_game *data_game);
int			key_hook(int keycode, t_game *data_game);
int			loop_draw_game(t_game *data_game);
void		key_press(int keycode, t_game *data_game);
void		move_up(t_game *game);
int			draw_map(t_game *data_game);
void		move_down(t_game *game);
void		move_left(t_game *game);
void		move_right(t_game *game);
#endif
