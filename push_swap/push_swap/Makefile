NAME = push_swap

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

SRC =	src/main.c \
		src/controlError.c \
		src/createStacks.c \
		src/ft_atoi_modified.c \
		src/push_swap.c \
		src/get_element.c \
		src/lstmain.c \
		src/get_number_id.c 

OBJDIR = obj/

OBJ = $(addprefix $(OBJDIR), $(SRC:.c=.o))

LIBFT = ./libft/libft.a

$(NAME): $(OBJ)
	@make -C ./libft
	@make bonus -C ./libft
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@printf "\033[32mOKEY"

$(OBJDIR)%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@make clean -C ./libft
	$(RM) -r $(OBJDIR)

fclean: clean
	@make fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
