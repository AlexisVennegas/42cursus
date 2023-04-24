/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   returnline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:29:46 by acaceres          #+#    #+#             */
/*   Updated: 2023/02/19 23:00:46 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>

unsigned int	ft_atoi(char *str);
char			*ft_getline(char *str, int i);
char			*ft_readonly(void);
void			ft_putchar(char *str);

unsigned int	returnline(char *arg)
{
	char	*str;
	char	*line;
	int		i;

	str = ft_readonly();
	line = NULL;
	i = 0;
	while (str[i])
	{
		line = ft_getline(str, i);
		if (ft_atoi(line) == ft_atoi(arg))
		{
			free(str);
			ft_putchar(line);
			return (ft_atoi(line));
		}
		free(line);
		line = NULL;
		i++;
	}
	free(str);
	return (0);
}
