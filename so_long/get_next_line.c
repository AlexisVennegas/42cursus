/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:51:38 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/16 18:52:21 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



int	ft_strlen_break(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_next_line(char *str)
{
	char	*nx_line;
	int		init_len;
	int		j;

	j = 0;
	init_len = ft_strlen_break(str);
	if (str[init_len] == '\0')
		return (free(str), NULL);
	nx_line = ft_calloc_gnl(ft_strlen_gnl(str) - init_len + 1, sizeof(char));
	if (!nx_line)
		return (free(str), free(nx_line), NULL);
	while (str[init_len + j])
	{
		nx_line[j] = str[init_len + j];
		j++;
	}
	nx_line[j] = '\0';
	return (free(str), nx_line);
}

char	*ft_before_break(char *readed)
{
	int		len;
	char	*str;
	int		j;

	len = 0;
	j = 0;
	if (!readed || !readed[j]) 
		return (NULL);
	len = ft_strlen_break(readed);
	str = ft_calloc_gnl(len + 1, sizeof(char));
	if (!str)
		return (free(readed), NULL);
	while (readed[j] && readed[j] != '\n')
	{
		str[j] = readed[j];
		j++;
	}
	if (readed[j] == '\n')
		str[j++] = '\n';
	str[j] = '\0';
	return (str);
}

char	*ft_read_only(int fd, char *aux, char *store, int nb_bytes)
{
	while (!(ft_strchr_gnl(store, '\n')) && nb_bytes != 0)
	{
		nb_bytes = read(fd, aux, BUFFER_SIZE);
		if (nb_bytes == -1)
			return (free(store), free(aux), NULL);
		aux[nb_bytes] = '\0';
		store = ft_strjoin(store, aux);
	}
	free(aux);
	return (store);
}

char	*get_next_line(int fd)
{
	int			nb_bytes;
	char		*aux;
	static char	*store;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	nb_bytes = 1;
	aux = malloc(BUFFER_SIZE + 1 * sizeof(char));
	if (!aux)
		return (free(aux), NULL);
	store = ft_read_only(fd, aux, store, nb_bytes);
	if (!store)
		return (free(store), NULL);
	aux = ft_before_break(store);
	store = ft_next_line(store);
	return (aux);
}

/*
int main(void)
{
	int a;
	char *line;

	a = open("test5.txt", O_RDONLY); //fd = 3 que significa que se abrio el archivo correctamente
	line = get_next_line(a);
	printf("result %s\n", line);
	close(a);
}



fd = 1 stdout 
fd = 2 stderr control de errores 
fd = 3 test1.txt
fd = -1 error
fd = 0 stdin




int	main(void)
{
	char	*line;
	int		a;
	FILE	*div;
	
	int		i;

	char	*archives[7] = {("test1.txt"), ("test2.txt"), ("test3.txt"), ("test4.txt"),
		("test5.txt"), ("test6.txt"), ("test7.txt")};
	i = 0;
	div = fopen("div.txt", "wt");
	while (i < 7)
	{
		a = open(archives[i], O_RDONLY);
		fputs("-----------  test   -------------\n", div);
		while ((line = get_next_line(a)) != NULL)
			fputs(line, div);
		fputs("\n", div);
		close(a);
		i++;
	}
	close(a);
	fclose(div);
	
	//system("leaks  a.out");
	return (0);
}
*/