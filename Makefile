# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/12 14:07:50 by pvan-ren          #+#    #+#              #
#    Updated: 2020/01/07 12:32:33 by pvan-ren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

# Path
SRC_PATH	= ./src/
INC_PATH	= ./include/
OBJ_PATH	= ./bin/

# Name
SRC_NAME	= push_swap.c \
			  ft_make_stacks.c \
			  ft_sort.c \
			  ft_string_is_nb.c \
			  ft_push.c \
			  ft_rotate.c \
			  ft_swap.c \
			  sort.c \

OBJ_NAME	= $(SRC_NAME:.c=.o)

# Files
SRC		= $(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJ		= $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

# Flags
LDFLAGS		= -L./libft/
LFT			= -lft
CC			= gcc $(CFLAGS)
#-fsanitize=address
CFLAGS		= -Wall -Wextra -Werror

# Rules
all: $(NAME) 

$(NAME): $(OBJ) $(INC_PATH)
	@make -C./libft/
	@echo "\033[34mCreating $(NAME)...\033[0m"
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ) -o $@
	@echo "\033[32m$(NAME) created\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -I$(INC_PATH) -o $@ -c $<

clean: cleanlib
	@echo "\033[33mRemoving $(NAME)  .o files ...\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH)  2> /dev/null || true
	@echo "\033[31mFiles .o deleted\033[0m"

cleanlib:
	@make clean -C ./libft/

fclean: clean fcleanlib
	@echo "\033[33mRemoving $(NAME) ...\033[0m"
	@rm -f $(NAME)
	@echo "\033[31mBinary $(NAME) deleted\033[0m"

fcleanlib:
	@make fclean -C ./libft/

re: fclean all

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.ih

.PHONY : all clean fclean re
