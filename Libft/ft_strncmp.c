/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:18:52 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/13 14:33:23 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if ((i != n))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
int	main(void)
{
	char	x[50] = {"a"};
	char	y[50] = {"ssdasdasdasd"};

	printf("%i\n", ft_strncmp(x, y, 4));
	printf("%i\n", strncmp(x, y, 4));
	return (0);
}

compara dos strings hasta n caracteres

si el valor de retorno <0, indica que str1 < str2.

si el valor de retorno > 0, indica que str1 > str2.

si el valor de	retorno = 0, indica que str1 ==  str2.

*/