/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:10:07 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/26 17:33:19 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_arguments(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
		i++;
	return (i);
}

static char	**more_arguments(int argc, char **argv)
{
	char	**aux;
	int		i;
	int		j;

	i = 1;
	j = 0;
	aux = malloc(sizeof(char *) * (argc));
	if (!aux)
		return (NULL);
	while (argv[i] != NULL)
	{
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
	return (args);
}

void	cut_arguments(int argc, char **argv)
{
	char	**ar;

	if (argc == 2)
	{
		ar = one_argument(argv[1]);
		if (!ar)
			return ;
		get_element(ar, count_arguments(ar));
	}
	else if (argc > 2)
	{
		ar = more_arguments(argc, argv);
		if (!ar)
			return ;
		get_element(ar, argc - 1);
	}
	else
		return ;
}
