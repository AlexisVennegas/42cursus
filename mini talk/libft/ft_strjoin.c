/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:42:34 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/22 14:44:58 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*total;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	total = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!total)
	{
		free(total);
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		total[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		total[i++] = s2[j++];
	total[i] = '\0';
	return (total);
}
/*
int main(void)
{
    char *str1 = "hola";
    char *str2 = "adios";
    printf("%s", ft_strjoin(str1, str2));
    return (0);
}
asignar memoria con malloc dinamicamente
luego copiar los dos strings en el nuevo string
*/