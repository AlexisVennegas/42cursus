NAME = push_swap

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

NONE='\033[0m'
GREEN='\033[32m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

SRC =	src/controlError.c \
		src/createStacks.c \
		src/different_sort.c \
		src/exe.c \
		src/ft_atoi_modified.c \
		src/get_element.c \
		src/get_number_id.c \
		src/lstmain.c \
		src/main.c \
		src/quick.c \
		src/moves.c \
		src/push_swap.c \
		src/selection_sort.c 

OBJDIR = obj/

OBJ = $(addprefix $(OBJDIR), $(SRC:.c=.o))

LIBFT = ./libft/libft.a

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(NAME)..." $(NONE)
	@make -C ./libft
	@make bonus -C ./libft
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo $(GREEN)"- Compiled -"$(NONE)

$(OBJDIR)%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@make clean -C ./libft
	@$(RM) -r $(OBJDIR)
	@echo $(CURSIVE)$(GRAY) "     - Removing object files..." $(NONE)

fclean: clean
	@make fclean -C ./libft
	@$(RM) $(NAME)
	@echo $(CURSIVE)$(GRAY) "     - Removing $(NAME)..." $(NONE)

re: fclean all

.PHONY: all clean fclean re
