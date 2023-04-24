/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:13:44 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/20 18:54:53 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slength;
	unsigned int	dlength;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlength = j;
	slength = ft_strlen(src);
	if (size == 0 || size <= dlength)
		return (slength + size);
	while (src[i] != '\0' && i < size - dlength - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlength + slength);
}
/*
int	main(void)
{
	
	printf("%i", ft_strlcat("hola", "hola",0));
	return (0);
}
*/