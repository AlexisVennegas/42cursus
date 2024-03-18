/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkingMap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:09:41 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/18 13:09:43 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"

static int has_walls(t_game *data_game)
{
    int i;
    int j;

    i = 0;
    while (data_game->map[i])
    {
        j = 0;
        while (data_game->map[i][j])
        {
            if (i == 0 || i == data_game->map_height - 1)
            {
                if (data_game->map[i][j] != '1')
                    return (0);
            }
            else if (j == 0 || j == data_game->map_width - 1)
            {
                if (data_game->map[i][j] != '1')
                    return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}


// has_pec verifica que el mapa tenga los caracteres correctos
static int check_format(t_game *data_game)
{
   	int	i;
	int	j;

	i = 0;
	while (data_game->map[i] != NULL)
	{
		j = 0;
		while (data_game->map[i][j] != '\0')
		{
			if (data_game->map[i][j] != '0' && data_game->map[i][j] != '1'
				&& data_game->map[i][j] != 'C' && data_game->map[i][j] != 'E'
				&& data_game->map[i][j] != 'P')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// check_walls verifica que el mapa tenga las paredes correctas
static int check_walls(t_game *data_game)
{
    int i;
    int j;

    i = 0;
    while (data_game->map[i])
    {
        j = 0;
        while (data_game->map[i][j])
        {
            if (i == 0 || i == data_game->map_height - 1)
            {
                if (data_game->map[i][j] != '1')
                    return (0);
            }
            else if (j == 0 || j == data_game->map_width - 1)
            {
                if (data_game->map[i][j] != '1')
                    return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}

// check_format verifica que el mapa tenga los caracteres correctos
static int check_rectangular(t_game *data_game)
{
    int i;
    int j;
    int len;

    i = 0;
    len = ft_strlen(data_game->map[0]);
    while (data_game->map[i])
    {
        j = 0;
        while (data_game->map[i][j])
            j++;
        if (i == 0)
			data_game->map_width = j;
		else if (j != data_game->map_width)
			return (0);
		i++;
    }
    data_game->map_height = i;
	return (1);
}

// check_format verifica que el mapa tenga los caracteres correctos
int check_map(t_game *data_game)
{
    int i;
    int j;

    i = 0;
    data_game->collectible = 0;
    data_game->exit = 0;
    data_game->player = 0;
    if (check_rectangular(data_game) || check_walls(data_game) || check_format(data_game))
        return (1);
    has_pec(data_game);
    if (data_game->player == 1 && data_game->collectible > 0 && data_game->exit == 1)
        return (1);
    return(0);
}
