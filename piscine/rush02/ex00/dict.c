/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:28:46 by acaceres          #+#    #+#             */
/*   Updated: 2023/02/19 22:50:32 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void			ft_compare(char *arg);

unsigned int	ft_atoi(char *str);
void			ft_number_div(int argnum);
int				ft_valid_argv(int argc);
int				ft_is_valid(char *str);

int	main(int argc, char *argv[])
{
	int	i;
	int	boolean_is_valid;
	int	boolean_valid_argv;

	i = 0;
	boolean_is_valid = ft_is_valid(argv[1]);
	boolean_valid_argv = ft_valid_argv(argc);
	if (!boolean_is_valid || !boolean_valid_argv)
	{
		write(1, "error", 5);
		return (0);
	}
	ft_compare(argv[1]);
	ft_number_div(ft_atoi(argv[1]));
	return (0);
}
