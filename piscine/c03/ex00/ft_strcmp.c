/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:48:07 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/16 19:31:22 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] != '\0' && s2[i] == '\0')
	{
		return (s1[i] - s2[i]);
	}
	else if (s2[i] != '\0' && s1[i] == '\0')
	{
		return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d", ft_strcmp("asd", "asd"));
	return (0);
}


0 si  s1 == s2

1 si  s1 > s2

-2 si s1 < s2

*/