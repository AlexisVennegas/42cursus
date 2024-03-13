/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:09:55 by avenegas          #+#    #+#             */
/*   Updated: 2023/04/11 11:39:13 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str2;

	str2 = (char *)s;
	i = 0;
	while (i < n)
	{
		str2[i] = 0;
		i++;
	}
}
/*

 int main(void)
 {
	char s[4] = {"hoda"};
	
	printf("res funci: %s\n", ft_bzero(s, 3));
	printf("res bzero: %s\n", bzero(s, 3));
	//printf("%s", s);
	return 0;
 }

	llena el string con 0 hasta el n que le pasemos como parametro 

*/
