# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 12:24:27 by avenegas          #+#    #+#              #
#    Updated: 2023/04/19 16:36:40 by avenegas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f 

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = 	ft_pointer.c \
		ft_hexad.c \
		ft_itoa.c \
		ft_hupper.c \
		ft_unsig.c \
		ft_ultil.c \
		ft_printf.c
		

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

exe: all
		$(CC) libftprintf.a main.c 

.PHONY: all clean fclean re
