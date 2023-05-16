/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:27:35 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/16 16:54:37 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include "mlx_sample.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

size_t	ft_strlen_gnl(const char *s);
char	*ft_strchr_gnl(char *s, int c);
char	*ft_strjoin_gnl(char *new_str, char *buff);
char	*get_next_line(int fd);
void	*ft_calloc_gnl(size_t count, size_t size);
int		ft_strlen_break(char *str);
char	*ft_read_only(int fd, char *aux, char *store, int nb_bytes);
#endif