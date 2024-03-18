# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 12:24:04 by avenegas          #+#    #+#              #
#    Updated: 2024/03/18 14:44:29 by avenegas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

CC_FLAGS = -Wall -Wextra -Werror -g
MLXFLAGS = -I /usr/local/include -L /usr/local/lib -l mlx -framework OpenGL -framework Appkit

RM = rm -f

SRC	=	src/checking.c 		\
		src/checkingMap.c	\
		src/game.c			\
		src/init_game.c		\
		src/moves.c			\
		src/read_map.c		\
		src/so_long.c		\
		src/utils.c 		\
		src/checkingMap.c 	\

OBJ = $(SRC:.c=.o)

libft = ./libft/libft.a
MLIBX = ./minilibx_opengl_20191021/libmlx.a

all : $(NAME)


$(NAME): $(OBJ)
	@make -C  libft
	@make -C minilibx_opengl_20191021
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(MLIBX) $(MLXFLAGS) -o $(NAME)
	@clear

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@make clean -C ./libft
	@make clean -C ./minilibx_opengl_20191021
	@$(RM) $(OBJ)

fclean: clean
	@make fclean -C ./libft
	@make clean -C ./minilibx_opengl_20191021
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
