#include "push_swap.h"

void	handler_error(int i)
{
	if (i == 1)
		ft_putendl_fd("Error con los argumentos", 1);
	exit(0);
}






int	check_arg(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

void	validateNums(int argc, char **argv)
{
	int		i;
	int		tmp;
	char	**arrayNums;

	i = 0;
	tmp = 0;
	arrayNums = NULL;
	if (argc == 2)
		arrayNums = ft_split(argv[1], ' ');
	if (check_arg(argc, argv) == -1)
		handler_error(1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (printf("Error"), 0);
	validateNums(argc, argv);
	return (0);
}