/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:41:56 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/20 15:28:37 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cutinit(char const *str, char const *set)
{
	size_t	size;
	size_t	i;

	size = ft_strlen(str);
	i = 0;
	while (i < size)
	{
		if (ft_strchr(set, str[i]) == NULL)
			return (i);
		i++;
	}
	return (i);
}

size_t	ft_cutend(const char *s1, const char *set)
{
	size_t	size;
	size_t	i;

	size = ft_strlen(s1);
	i = 0;
	while (i < size)
	{
		if (ft_strchr(set, s1[size - i - 1]) == NULL)
			break ;
		i++;
	}
	return (size - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	cut_init;
	size_t	cut_end;
	char	*dest;
	size_t	len_dest;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	cut_init = ft_cutinit(s1, set);
	cut_end = ft_cutend(s1, set);
	if (cut_init >= cut_end)
		return (ft_strdup(""));
	dest = (char *)malloc(sizeof(char) * (cut_end - cut_init + 1));
	if (dest == NULL)
		return (NULL);
	len_dest = cut_end - cut_init + 1;
	ft_strlcpy(dest, s1 + cut_init, len_dest);
	return (dest);
}
/*
int main(void)
{
    char *str1 = "///hola///";
    char *str2 = "/";
    printf("%s", ft_strtrim(str1, str2));
    return (0);
}
*/