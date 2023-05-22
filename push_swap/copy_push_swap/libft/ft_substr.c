/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:03:40 by fsalazar          #+#    #+#             */
/*   Updated: 2023/03/10 15:15:53 by fsalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	size_t			i;
	unsigned int	unslen;

	if (!s)
		return (NULL);
	unslen = ft_strlen(s);
	if (start > unslen)
		return (ft_strdup(""));
	if (unslen - start < len)
		len = unslen - start;
	new_str = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!new_str)
		return (0);
	while (i < len)
	{
		new_str[i] = *(s + start + i);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
