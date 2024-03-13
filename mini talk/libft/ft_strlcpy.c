/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:10:52 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/20 15:23:44 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	total;

	i = 0;
	total = 0;
	while (src[total])
	{
		total++;
	}
	if (dstsize < 1)
	{
		return (total);
	}
	while (src[i] && i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (total);
}
/*
int main(void)
{
 	char string[] = "lorem ipsum dolor sit amet";
	char buffer[19];
	int size = 8;
	printf("total: %zu\n", ft_strlcpy(buffer, string, size));
	return (0);
}

void	test(int size)
{
	char	string[] = "Hello there, Venus"; 
    char buffer[19];
    int r;

    
    r = strlcpy(buffer,string,size);
    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int	main(void)
{
    test(18);
    test(10);
    test(1);
    test(0);
    return(0);
}
El valor devuelto es siempre el tamaño de la cadena, 
src independientemente de cuántos caracteres se copien).
*/