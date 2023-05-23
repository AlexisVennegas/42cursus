/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:10:07 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/23 16:15:16 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	**more_arguments(int argc, char **argv)
{
	char	**aux;
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (argv[i] != NULL)
	{
		aux = malloc(sizeof(char *) * (argc));
		if (!aux)
			return (NULL);
		aux[j] = ft_strdup(argv[i]);
		i++;
		j++;
	}
	aux[j] = NULL;
	return (aux);
}

static char	**one_argument(char *argv)
{
	char	**args;

	args = ft_split(argv, ' ');
	if (!args)
		return (NULL);
	if (ft_strlen(*args) == 1)
		return (NULL);
	return (args);
}

void	cut_arguments(int argc, char **argv, char **ar)
{
	if (argc == 2)
		ar = one_argument(argv[1]);
	else if (argc > 2)
		ar = more_arguments(argc, argv);
	else
		return ;
	if (!ar)
		return ;
	get_element(ar);
}
