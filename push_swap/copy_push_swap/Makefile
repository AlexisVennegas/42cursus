# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsalazar <fsalazar@student.42madrid.com:>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 14:14:15 by fsalazar          #+#    #+#              #
#    Updated: 2023/05/10 14:14:19 by fsalazar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Werror -Wall -Wextra -g
RM = rm -f

SRC = src/main.c \
      src/small_sorts.c \
      src/quick_sort.c \
      src/push.c \
      src/rotate.c \
      src/swap.c \
	  src/checks.c \
	  src/indexing.c \
	  src/sorting_utils.c \
	  src/parse_args.c \
      src/counter_rotate.c

OBJDIR = obj/
OBJS = $(addprefix $(OBJDIR), $(SRC:.c=.o))

LIBFT = ./libft/libft.a
PRINTF = ./ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	@make -C ./libft
	@make bonus -C ./libft
	@make -C ./ft_printf
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME) 
	@printf "\033[32m[ ✔ ] %s\n\033[0m" "push_swap" 

$(OBJDIR)%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C ./libft
	@make clean -C ./ft_printf
	$(RM) -r $(OBJDIR)

fclean: clean
	@make fclean -C ./libft
	@make fclean -C ./ft_printf
	$(RM) $(NAME)

re: fclean all

test2: $(NAME)
	$(eval ARG = $(shell jot -r -s " " 2 0 100))
	./push_swap $(ARG) | ./checker_Mac $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test3: $(NAME)
	$(eval ARG = $(shell jot -r -s " " 3 0 100))
	./push_swap $(ARG) | ./checker_Mac $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test5: $(NAME)
	$(eval ARG = $(shell jot -r -s " " 5 0 100))
	./push_swap $(ARG) | ./checker_Mac $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test100: $(NAME)
	$(eval ARG = $(shell jot -r -s " " 100 0 100))
	./push_swap $(ARG) | ./checker_Mac $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test500: $(NAME)
	$(eval ARG = $(shell jot -r -s " " 500 0 500))
	./push_swap $(ARG) | ./checker_Mac $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test1000: $(NAME)
	$(eval ARG = $(shell jot -r -s " " 1000 0 1000))
	./push_swap $(ARG) | ./checker_Mac $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l



.PHONY: all clean fclean re test2 test3 test5 test100 test500 test1000

