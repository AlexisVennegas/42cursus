/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:27:35 by avenegas          #+#    #+#             */
/*   Updated: 2023/04/03 15:00:58 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

size_t	ft_strlen(const char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *new_str, char *buff);
char	*get_next_line(int fd);
char	*ft_format_line(char *store);
void	*ft_calloc(size_t count, size_t size);
int		ft_strlen_break(char *str);
char	*ft_read_only(int fd, char *aux, char *store, int nb_bytes);
#endif