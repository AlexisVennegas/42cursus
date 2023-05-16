#include "mlx_sample.h"

int	ft_size_line(int fd)
{
	char	buffer[0];
	int		length;
	int		bytes;

	buffer[0] = '\0';
	bytes = 1;
	length = 0;
	while (bytes == 1)
	{
		bytes = read(fd, buffer, 1);
		if (buffer[0] != '\n')
			length++;
		else
			break ;
	}
	return (length);
}

int	ft_count_line(int fd)
{
	int		linecount;
	char	buffer[0];
	int		bytes;

	buffer[0] = '\0';
	linecount = 1;
	while (1)
	{
		bytes = read(fd, buffer, 1);
		if (bytes < 1)
			break ;
		if (buffer[0] == '\n')
			linecount++;
	}
	return (linecount);
}

void	ft_check_map(t_windowData *data, char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		error(1);
	if (ft_strnstr(argv[1], ".ber", ft_strlen(argv[1])) == NULL)
		error(3);
	data->x = (ft_size_line(fd) * 50);  // tamaño de la linea * 50
	data->y = (ft_count_line(fd) * 50); // cantidad de lineas * 50
}
