/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:59:58 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/15 09:43:18 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_jarvis(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	iaux;

	iaux = 1;
	i = 0;
	ft_jarvis(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (iaux == 1)
				str[i] = str[i] - 32;
			iaux = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			iaux = 0;
		else
			iaux = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	printf("%s",  ft_strcapitalize(str));
	return (0);
}
*/