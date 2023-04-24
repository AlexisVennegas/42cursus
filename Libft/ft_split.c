/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:12:04 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/22 15:35:53 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_letters(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

int	ft_cut_string(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

void	*ft_free_array(char **array, int position)
{
	while (position--)
		free(array[position]);
	free(array);
	return (NULL);
}

void	*ft_split_cpy(char const *s, char c, char **array, int i_str)
{
	int	position;
	int	aux;

	position = 0;
	aux = 0;
	while (s[i_str])
	{
		if (s[i_str] != c)
		{
			array[position] = (char *)malloc(sizeof(char) * (ft_count_letters(s,
							c, i_str) + 1));
			if (!array[position])
				return (ft_free_array(array, position), NULL);
			while (s[i_str] != c && s[i_str])
				array[position][aux++] = s[i_str++];
			array[position++][aux] = '\0';
			aux = 0;
		}
		else
			i_str++;
	}
	array[position] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	i_str;
	unsigned int	position;
	unsigned int	aux;

	i_str = 0;
	position = 0;
	aux = 0;
	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_cut_string(s, c) + 1));
	if (!array)
		return (NULL);
	array = ft_split_cpy(s, c, array, i_str);
	return (array);
}

/*
int	main(void)
{
	char const	str[];
	char		c;
    int i;

    str[] = {"hola que tal"};
    c = ' ';
	i = 0;
	while(i < ft_strlen(str))
	{
		printf("%s\n", ft_split(str, c)[i]);
		i++;
	}
    return (0);
}

*/