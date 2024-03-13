NAME = talk.a

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

SRC = server.c client.c

OBJ = $(SRC:.c=.o)


$(NAME): $(OBJ)
	@echo "\033[36m"--Compilando--"\033[0m ";
	@make -sC libft
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	gcc -Wall -Werror -Wextra server.c libft/libft.a -o server
	gcc -Wall -Werror -Wextra client.c libft/libft.a -o client
	@clear
	
all: $(NAME)

re: fclean all

clean:
	@rm -rf $(NAME) $(OBJ) a.out server client
	@make -sC libft fclean
	@clear
	@echo "\033[34m" CLEAN "\033[0m"

fclean: clean
		@rm -rf libft.a talk.a

.PHONY: all clean re fclean