# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/19 22:11:45 by avenegas          #+#    #+#              #
#    Updated: 2023/02/19 22:41:12 by avenegas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=rush-02
CC=gcc
SRC= *.c
OBJ= *.o
FLAGS=-Wall -Werror -Wextra
RM=/bin/rm -f
all=$(NAME)
$(NAME): $(SRC)
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
dict.o: dict.c
ft_atoi.o: ft_atoi.c
ft_compare.o: ft_compare.c
ft_number_div.o: ft_number_div.c
ft_readonly.o: ft_readonly.c
returnline.o: returnline.c
ft_getline.o: ft_getline.c
ft_valid_argv.o: ft_valid_argv.c
ft_is_valid.o: ft_is_valid.c
clean:
	$(RM) $(OBJ)
fclean:
	$(RM) $(NAME)
