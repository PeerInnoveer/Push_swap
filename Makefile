# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/12 14:07:50 by pvan-ren          #+#    #+#              #
#    Updated: 2020/01/22 12:30:25 by pvan-ren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHKR = checker
PS = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC = -I ./include/
LIBFT = ./libft/libft.a

CH_SRCS = ./src/checker.c \
			./src/error_check.c \
			./src/make_stacks.c \
			./src/push.c \
			./src/rotate.c \
			./src/sort.c \
			./src/string_is_nb.c \
			./src/swap.c \

PS_SRCS = ./src/error_check.c \
			./src/make_stacks.c \
			./src/push.c \
			./src/rotate.c \
			./src/sort.c \
			./src/string_is_nb.c \
			./src/swap.c \
			./src/push_swap.c \
			./src/sortAlgo.c

RM = rm -rf
NORM = norminette

all: $(LIBFT)
	@$(CC) -o $(CHKR) $(CH_SRCS) $(CFLAGS) $(INC) $(LIBFT)
	@$(CC) -o $(PS) $(PS_SRCS) $(CFLAGS) $(INC) $(LIBFT)
	@echo "\033[32m[Compiled]\033[0m"

checker: clean_chkr	
	@$(RM) $(CHKR)
	@$(CC) -o $(CHKR) $(CH_SRCS) $(CFLAGS) $(INC) $(LIBFT)
	@echo "\033[32m[Compiled Checker]\033[0m"

push_swap: clean_ps
	@$(CC) -o $(PS) $(PS_SRCS) $(CFLAGS) $(INC) $(LIBFT)
	@echo "\033[32m[Compiled Push_Swap]\033[0m"

clean_chkr:
	@$(RM) $(CHKR)

clean_ps:
	@$(RM) $(PS)

norm:
	@$(NORM) ./includes/ ./libft/srcs/*.c ./libft/includes/ ./srcs/*.c

$(LIBFT):
	@make re -C ./libft/
	@echo "\033[32m[Compiled Libft]\033[0m"

clean:
	@make clean -C ./libft/
	@$(RM) $(CHKR)
	@$(RM) $(PS)
	@echo "\033[31m[Cleaned]\033[0m"

fclean: clean
	@make fclean -C ./libft/
	@echo "\033[031m[Cleaned]\033[0m"

re: fclean all
