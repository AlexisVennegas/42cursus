/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:46:02 by avenegas          #+#    #+#             */
/*   Updated: 2023/05/02 17:29:57 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_itoa(int n);
int		ft_printf(char const *param, ...);
int		ft_putchar(const char *str);
int		ft_letter(int letter);
int		ft_hexad(unsigned long int nb);
int		ft_countnumber(int n);
int		ft_count_hexa(unsigned long int n);
int		ft_hupper(unsigned int nb);
int		ft_unsig(unsigned int nb);
void	*ft_itoa_nb_u(char *str, int total, unsigned int n);
int		ft_pointer(unsigned long int c);
char	*ft_hupper_control(unsigned int nb, char *str, int total);
int		ft_evaluator(const char *str, va_list newlist);
int		ft_putchar_free(char *str);
#endif
