/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:24:17 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/18 14:09:32 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "so_long.h"


// lee el archivo y lo guarda en un array de strings        
char **read_map(char *file)
{
    int fd;
    char *line;
    char **map;
    char *temp;

    fd = open(file, O_RDONLY);
    if (fd == -1)
    {
        ft_putstr_fd("Error, no se pudo abrir el archivo\n", 2);
        exit(1);
    }
    temp = NULL;
    while(1)
    {
        line = get_next_line(fd);
        if (line == NULL)
            break;
        temp = ft_strjoin_gnl(temp, line);
        free(temp);
    }
    map = ft_split(temp, '\n');
    free(temp);
    close(fd);
    return (map);
}

int close_game(t_game *data_game)
{
    free_arr(data_game->map);
    mlx_destroy_image(data_game->mlx, data_game->img_background);
	mlx_destroy_image(data_game->mlx, data_game->img_wall);
	mlx_destroy_image(data_game->mlx, data_game->img_player);
	mlx_destroy_image(data_game->mlx, data_game->img_exit);
	mlx_destroy_image(data_game->mlx, data_game->img_collectible);
	mlx_destroy_window(data_game->mlx, data_game->win);
	mlx_destroy(data_game->mlx);
	system("leaks -q so_long");
	exit(0);
}
