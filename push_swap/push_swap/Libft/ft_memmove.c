/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:42:38 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/20 14:27:36 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fillearray(char *str1_c, char *str2_c, size_t n)
{
	while (n > 0)
	{
		str1_c[n - 1] = str2_c[n - 1];
		n--;
	}
	return (str1_c);
}

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*str1_c;
	char	*str2_c;
	size_t	i;

	i = 0;
	str1_c = (char *)str1;
	str2_c = (char *)str2;
	if (str1_c == NULL && str2_c == NULL)
		return (NULL);
	if (str1_c > str2_c)
	{
		return (ft_fillearray(str1_c, str2_c, n));
	}
	else
	{
		while (i < n)
		{
			str1_c[i] = str2_c[i];
			i++;
		}
	}
	return (str1);
}
/*
int	main(void)
{
	char str1[] = "comeras";
	char str2[] = "hola!";

	ft_memmove(str1, str2, 4);
	memmove(str1, str2, 4);
	printf("str1 mem: %s\n", str1);
	printf("str2 mem: %s\n", str2);

	return(0);
}
copia de str2 en str1 hasta n caracteres
*/
