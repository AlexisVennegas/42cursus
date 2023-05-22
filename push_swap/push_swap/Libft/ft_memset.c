/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:55:03 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/20 14:29:47 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/* 
int main () {

	char str[50] = {"ingenieroenquimica"};
	char letter = '/';
 	printf("ft : %s\n", ft_memset(str, letter, 2));
	printf("mem: %s", memset(str, letter, 2));
   return(0);
}


  	strcpy(str,"hoda");
	printf("antes: %s\n", str);

   memset(str,'p', 3);
   printf("despu: %s", str);

inserta en el string, un caracter, el numero es el que define 
cuantos caracteres se van a remplazar

*/