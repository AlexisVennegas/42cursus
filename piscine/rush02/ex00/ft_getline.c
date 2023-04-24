/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:29:07 by acaceres          #+#    #+#             */
/*   Updated: 2023/02/19 23:02:34 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_getline(char *str, int i)
{
	int		j;
	int		k;
	char	*line;

	j = 0;
	while (str[i] != '\n')
	{
		j++;
		i++;
	}
	line = (char *)malloc(j + 1);
	k = 0;
	while (k < j)
	{
		line[k] = str[i - j + k];
		k++;
	}
	line[j] = '\0';
	return (line);
}
