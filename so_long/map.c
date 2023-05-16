#include "mlx_sample.h"
void	*put_image(t_image img, int x, int y)
{
	img.img = mlx_xpm_file_to_image(img.wlx.mlx, img.relative_path,
			&img.img_width, &img.img_height);
	mlx_put_image_to_window(img.wlx.mlx, img.wlx.window, img.img, x, y);
	return (img.img);
}

t_block	set_image(char name)
{
	t_block	block[6];
	int		i;

	block[0] = (t_block){"1", "/assets/floor.xpm"};
	block[1] = (t_block){"0", "/assets/floor.xpm"};
	block[2] = (t_block){"C", "/assets/floor.xpm"};
	block[3] = (t_block){"P", "/assets/floor.xpm"};
	block[5] = (t_block){NULL, NULL};
	i = 0;
	while (block[i].name != NULL)
	{
		if (block[i].name[0] == name)
		{
			return (block[i]);
			break ;
		}
		i++;
	}
	return (block[5]);
}


void	add_texture(t_windowData *data, int i)
{
	int		j;
	t_block	map;
	t_image	image;

	image.wlx = *data;
	j = 0;
	while (data->map[i])
	{
		while (data->map[i][j])
		{
			map = set_image(data->map[i][j]);
			image.relative_path = map.relative_path;
			put_image(image, (j * SIZE), (i * SIZE));
			j++;
		}
		i++;
	}
}

void	add_surface(t_windowData data, int i)
{
	int		j;
	t_image	img;

	img.wlx = data;
	j = 0;
	if (ft_strlen(data.map[i]) != data.x / 50 && i != (data.y / 50))
		error(4);
	if (data.map[(data.y / 50)] && data.map[(data.y / 50)][0] != '\0')
		error(4);
	while (data.map[i])
	{
		j = 0;
		while (data.map[i][j])
		{
			if (!(ft_strchr("1PCE0", data.map[i][j])))
				error(6);
			img.relative_path = "./assets/floor.xpm";
			put_image(img, (j * SIZE), (i * SIZE));
			j++;
		}
		i++;
	}
}

void	define_size(char *area, t_windowData *data, int i)
{
	int		j;
	t_image	image;

	image.wlx = *data;
	j = 0;
	data->map[i] = (char *)malloc(sizeof(char) * (9999));
	if (!data->map[i])
		error(2);
	while (area[j])
	{
		if (area[j] == '\n')
			break ;
		data->map[i][j] = area[j];
		j++;
	}
	add_surface(*data, i);
	add_texture(data, i);
}

void	create_map(t_windowData *data, char **argv)
{
	int		fd;
	char	*len;
	int		i;

	fd = open(argv[1], O_RDONLY);
	data->map = (char **)malloc(sizeof(char *) * (9999));
	if (!data->map)
		error(2);
	i = 0;
	while (i <= data->y / 50)
	{
		len = get_next_line(fd);
		if (len == NULL)
			break ;
		define_size(len, data, i);
		i++;
	}
	close(fd);
}
