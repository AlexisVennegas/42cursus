/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:10:29 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/22 11:42:20 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str_cpy;
	char	*to_find_cpy;

	str_cpy = (char *)haystack;
	to_find_cpy = (char *)needle;
	i = 0;
	if (len == 0 && haystack == NULL)
		return (NULL);
	if (!(needle[i]))
		return (str_cpy);
	while (str_cpy[i] != '\0' && i < len)
	{
		j = 0;
		while (str_cpy[i + j] && str_cpy[i + j] == to_find_cpy[j] && i
			+ j < len)
		{
			if (to_find_cpy[j + 1] == '\0')
				return (&str_cpy[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
 int main(void)
 {
	
 	char search[] = {"es"};
    char text[] = {"comeresbonito"};

	printf("strstr: %s\n", strnstr(text, search, 10));
	printf("funt  : %s", ft_strnstr(text, search, 8));
	return 0;
 }

 */
