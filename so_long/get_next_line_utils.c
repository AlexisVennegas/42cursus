/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:54:43 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/16 16:54:31 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc_gnl(size_t count, size_t size)
{
	char	*total;
	size_t	i;

	i = 0;
	total = malloc(count * size);
	if (!total)
		return (free(total), NULL);
	while (i < count * size)
	{
		total[i] = 0;
		i++;
	}
	return (total);
}

size_t	ft_strlen_gnl(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr_gnl(char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	if (c == 0)
	{
		i = ft_strlen((char *)s);
		return (&s[i]);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_join_cut(char *s1, char *s2, char *total)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1 && s1[i] != '\0')
	{
		total[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
	{
		total[i + j] = s2[j];
		j++;
	}
	total[i + j] = '\0';
	return (total);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char			*total;

	if (!s1)
	{
		s1 = ft_calloc(1, sizeof(char));
		if (!s1)
			return (free(s1), NULL);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (free(s2), NULL);
	total = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!total)
		return (free(total), free(s1), NULL);
	total = ft_join_cut(s1, s2, total);
	return (free(s1), total);
}
