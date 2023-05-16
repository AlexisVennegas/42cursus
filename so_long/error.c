#include "mlx_sample.h"

void	error(int i)
{
	if (i == 1)
		ft_putstr_fd("open or reading error, the file may not exist", 1);
	else if (i == 2)
		ft_putstr_fd("malloc error on alloc map", 1);
	else if (i == 3)
		ft_putstr_fd("error on arguments, please enter a map", 1);
	else if (i == 4)
		ft_putstr_fd("error on map, the map must be rectangular", 1);
	else if (i == 5)
		ft_putstr_fd("error on map, the map must be surrounded by walls", 1);
	else if (i == 6)
		ft_putstr_fd("error on map, the map must have at least one player", 1);
	exit(1);
	return ;
}
