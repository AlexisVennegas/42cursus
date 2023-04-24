/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:09:15 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/22 13:35:21 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * j + 1);
	while (src[j])
	{
		j++;
	}
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int	main(void)
{
	printf("dest despues de ser bichota: %s\n", ft_strdup("hola"));
	return (0);
}
*/