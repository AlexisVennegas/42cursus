/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:33:54 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/24 10:29:33 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t			i;
	unsigned int	total_s;
	char			*s_cpy;

	i = 0;
	total_s = ft_strlen(src);
	s_cpy = (char *)malloc(total_s + 1);
	if (!s_cpy)
		return (NULL);
	while (src[i])
	{
		s_cpy[i] = src[i];
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}
/*
int main()
{
    char source[] = "GeeksForGeeks";
 
    // 5 bytes of source are copied to a new memory
    // allocated dynamically and pointer to copied
    // memory is returned.
	printf("funt: %s\n", ft_strdup(source));
   
    printf("strn: %s", strdup(source));
    return 0;
}
asignar memoria dinamica a un src y copiarlo en el dst
*/