/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:01:18 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 14:01:21 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	char	*joined;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	joined = malloc(sizeof(char) * total_len);
	if (!joined)
		return (0);
	ft_memmove(joined, s1, s1_len);
	ft_memmove(joined + s1_len, s2, s2_len);
	joined[total_len - 1] = '\0';
	return (joined);
}
