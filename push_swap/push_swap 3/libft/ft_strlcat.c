/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:42:05 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/22 14:45:16 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_total;
	unsigned int	dst_total;

	i = 0;
	j = 0;
	if (dstsize == 0 && dst == NULL)
		return (0);
	while (dst[j] != '\0')
	{
		j++;
	}
	dst_total = j;
	src_total = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dst_total)
		return (src_total + dstsize);
	while (src[i] != '\0' && i < dstsize - dst_total - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_total + src_total);
}
/*
int main(void)
{
	char first[] = "This is ";
    char last[] = "the way";
    int r;
    int size = 10;
    char buffer[size];
    
	strcpy(buffer,first);
	printf("funcion total: %zu", ft_strlcat(buffer,last, size));
	return (0);
}

Como solución, la función strlcat() ofrece un argumento adicional, 
dstsize. Este argumento establece la longitud de la cadena de destino,
 de hecho igual a su tamaño de búfer. 

int main(void)
{
    char first[] = "This is ";
    char last[] = "the way";
    int r;
    int size = 12;
    char buffer[size];

 strcpy(buffer,first); // buffer que estaba vacio ahora es lo mismo que first 
    r = strlcat(buffer,last,size); 

    puts(buffer);	// buffer ya concatenado first + last[size]
    printf("Value returned: %d\n",r); // valor total devuelto de buffer + last
    if( r > size ) // si la limitamos con size, el string esta incompleto 
        puts("String truncated");
    else		// size vale mas que r, va de sobra el string jiji
        puts("String was fully copied");

   
    return(0);
}
*/