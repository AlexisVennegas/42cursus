/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readonly.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:29:31 by acaceres          #+#    #+#             */
/*   Updated: 2023/02/19 22:29:32 by acaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_readonly(void)
{
	int		a;
	int		nb_bytes;
	char	*str;

	str = (char *)malloc(1000);
	a = open("numbers.dict", O_RDONLY);
	nb_bytes = read(a, str, 1000);
	close(a);
	return (str);
}
