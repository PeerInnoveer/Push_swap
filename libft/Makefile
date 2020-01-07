# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 16:05:24 by cfatrane          #+#    #+#              #
#    Updated: 2020/01/07 09:23:40 by pvan-ren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binary

NAME = libft.a

# Path

OBJ_PATH = ./bin/

# Name

SRC_NAME = ft_lstadd.c \
	  		ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_strlcat.c \
	  		ft_abs.c \
			ft_putbyte.c \
	  		ft_intlen.c \
			ft_strlen.c \
			ft_strnlen.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_memcmp.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strtrim.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strsplit.c \
			ft_itoa.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strnew.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putendl.c \
			ft_putnbr.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_strclr.c \
			ft_strdel.c \
			ft_striter.c \
			ft_striteri.c \
			get_next_line.c \
			ft_strnew_two.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

# Files

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Flags

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

# Rules

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\x1B[34mCreating $(NAME)...\033[0m"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32m$(NAME) Created\033[0m"

$(OBJ_PATH)%.o: %.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

clean:
	@echo "\033[33m.o files removed from $(NAME)\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\033[0m"

fclean: clean
	@echo "\033[33m$(NAME) Removed\033[0m"
	@rm -f $(NAME)
	@echo "\033[31m$(NAME) Binary Deleted\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h
