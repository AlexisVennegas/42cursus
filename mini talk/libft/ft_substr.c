/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:06:46 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/20 15:30:08 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*s_cpy;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	s_cpy = (char *)malloc(len + 1);
	if (!s_cpy)
		return (NULL);
	while (s[start + i] && i < len)
	{
		s_cpy[i] = s[start + i];
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}
/*
int main(void)
{
	char *str = "ya no hay buenos dias";
 	printf("%s", ft_substr(str, 17, 4));
	return (0);
}

corta una cadena desde el indice 
start y devuelve una cadena de longitud len


*/