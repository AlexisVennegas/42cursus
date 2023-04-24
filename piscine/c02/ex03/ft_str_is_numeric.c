/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:42:55 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/14 15:45:25 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	return (1);
}
/*

int main(void)
{
	char a[] = {"12"};
	ft_str_is_numeric(a);
	return (0);
}
*/