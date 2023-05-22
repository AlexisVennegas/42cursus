/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:54:01 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 14:20:06 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;
	size_t	a;
	char	*char_ptr;

	ptr = NULL;
	total_size = nmemb * size;
	a = 0;
	if (nmemb != 0 && total_size / nmemb != size)
		return (NULL);
	ptr = malloc (total_size);
	if (!ptr)
		return (NULL);
	if (ptr != NULL)
	{
		char_ptr = (char *)ptr;
		while (a < total_size)
		{
			char_ptr[a] = 0;
			a++;
		}
	}
	return (ptr);
}
