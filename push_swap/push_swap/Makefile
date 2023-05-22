NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIFT = libft/
DIR = src/

SRC_PS = src/main.c \

SRC =	src/controlError.c \
		src/errorHandler.c \
		src/ft_atoi_modified.c \
		src/isSorted.c \
		src/main_list.c \
		src/main.c \
		src/moves.c \
		src/oneArgument.c \
		src/sort.c \

OBJ_PS = $(SRC_PS:.c=.o)
OBJ = $(SRC:.c=.o)

INCLUDE = -L ./libft -lft

.c.o:
	$(CC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ) $(OBJ_PS)
	make -C $(LIFT)
	$(CC) $(FLAGS) $(OBJ_PS) $(OBJ) -o $(INCLUDE) -o

all: $(NAME)

clean:
	$(RM) $(OBJ) $(OBJ_PS) $(NAME)
	@cd $(LIFT) && $(MAKE) clean

fclean: clean
	$(RM) $(NAME)
	@cd $(LIFT) && $(MAKE) clean

re: fclean all

.PHONY: all clean fclean re