/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:44:19 by avenegas          #+#    #+#             */
/*   Updated: 2023/02/23 12:11:30 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(4));
	return (0);
}

			f(2) 				+		f(3)
		f(0)		+		f(1)	+	f(1)  	+ 			f(2)
		  0		+	   1	+	 1 		+ 	 f(0)	+	f(1)
													0	+     1
		resultado de fibonacci index 4:
				0		+		1	+	1		+		0	+		1 = 3
*/