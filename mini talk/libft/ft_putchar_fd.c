/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:37:59 by avenegas          #+#    #+#             */
/*   Updated: 2023/03/22 14:44:29 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write(fd, &c, 1);
}
/*
int	main(void)
{
	char c = '\0';
    int i = 1;
    ft_putchar_fd(c, i);
	return (0);
}

0 = (stdin) entrada estandar scanf
1 = (stdout) salida estandar prinf
2 = (stderr) salida de error
3 = (stdout) salida estandar

*/