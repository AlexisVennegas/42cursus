/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:30:20 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/22 18:52:32 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*str;

	str = *a;
	*a = *b;
	*b = str;
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 1;
	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			ft_swap(&argv[j], &argv[j + 1]);
		j++;
	}
	j = 1;
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
