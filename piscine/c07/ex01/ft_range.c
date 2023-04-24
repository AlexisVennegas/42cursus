/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:41:30 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/22 13:54:26 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max)
{
	int i;
	int *result;

	i = 0;

	while(i < max)
	{
		if(max == min)
			return (*result);
		result = max;
	
		max--;
	}	

return(i);
}

int main(void)
{
	printf("%i",ft_range(1, 5));
	return (0);
}
