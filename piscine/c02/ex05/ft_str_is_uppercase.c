/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:21:17 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/14 15:48:11 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	ft_str_is_uppercase(a);
	return (0);
}
*/
