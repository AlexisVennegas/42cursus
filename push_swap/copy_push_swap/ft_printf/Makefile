# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 12:58:53 by fsalazar          #+#    #+#              #
#    Updated: 2023/05/10 14:15:15 by fsalazar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = 	ft_printf.c	\
	ft_print_char.c	\
	ft_print_hex.c	\
	ft_print_int.c	\
	ft_print_ptr.c	\
	ft_print_str.c	\
	ft_print_uint.c

OBJDIR = objs/
OBJS = $(addprefix $(OBJDIR), $(SRCS:.c=.o))

$(OBJDIR)%.o: %.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

all: $(NAME)
	@echo "ft_printf.a compiled succesfully"

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: all

.PHONY: all clean fclean re
