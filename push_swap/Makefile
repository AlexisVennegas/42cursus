NAME = push_swap
SRC = *.c
OBJ = ${SRC:.c=.o}

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) libft/libft.a
	@gcc $(FLAGS) $(OBJ) -Llibft -lft -o $(NAME)
	@rm $(OBJ)

$(OBJ): $(SRC)
	@gcc $(FLAGS) -c $(SRC)

libft:
	@make -C libft

clean:
	@rm -rf $(OBJ)
	@make -C libft clean

fclean: clean
	@rm -rf $(NAME)
	@make -C libft fclean

re: fclean all

.PHONY: all clean fclean re libft