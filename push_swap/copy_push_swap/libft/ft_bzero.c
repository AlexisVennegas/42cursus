/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:53:37 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 13:53:49 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*replace;
	size_t	a;

	replace = s;
	a = 0;
	while (a < n)
	{
		replace[a] = 0;
		a++;
	}
	s = replace;
}
