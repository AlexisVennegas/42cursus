/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:29:18 by acaceres          #+#    #+#             */
/*   Updated: 2023/02/19 22:29:20 by acaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57) && (str[i] >= 32 && str[i] <= 126))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
