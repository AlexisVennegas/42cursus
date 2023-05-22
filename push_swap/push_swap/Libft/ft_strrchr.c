/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:52:26 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/13 13:18:56 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	x;
	char	*str2;

	str2 = (char *)str;
	x = (char)c;
	i = ft_strlen(str2);
	while (i >= 0)
	{
		if (str2[i] == x)
		{
			return (&str2[i]);
		}
		i--;
	}
	return (NULL);
}
/*

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("funcion: %s", ft_strrchr(str, ch));
   return(0);
}



 busca la última aparición del carácter c
 */