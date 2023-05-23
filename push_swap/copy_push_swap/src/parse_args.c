/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:32:47 by fsalazar          #+#    #+#             */
/*   Updated: 2023/05/23 12:17:18 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_args(int argc, char **argv)
{
	char	**args;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else if (argc > 2)
	{
		args = malloc(sizeof(char *) * (argc));
		while (argv[i] != NULL)
		{
			args[j] = ft_strdup(argv[i]);
			i++;
			j++;
		}
		args[j] = NULL;
	}
	else
		return (NULL);
	return (args);
}

int	args_len(char **args)
{
	int	i;

	i = 0;
	while (args[i] != NULL)
		i++;
	return (i);
}

void	ft_free_args(char **args, int error)
{
	int	i;

	i = 0;
	while (args[i] != NULL)
	{
		free(args[i]);
		i++;
	}
	free(args);
	if (error)
		ft_printf("Error\n");
}
