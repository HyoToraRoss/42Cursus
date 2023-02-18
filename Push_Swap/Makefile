# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 16:39:50 by martavar          #+#    #+#              #
#    Updated: 2023/02/18 16:44:53 by martavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =		$(SRC_DIR)/main.c 				\

OBJ			=	$(subst $(SRC_DIR), $(OBJ_DIR), $(SRC:.c=.o))

SRC_DIR		=	srcs

OBJ_DIR		=	objs

NAME 		=	push_swap

INC			=	includes/

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror -g -I$(INC) -g  -fsanitize=address
RM			=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I /usr/local/include -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

valgrind:	re
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes --log-file=valgrind-out.txt ./push_swap

re: fclean all

.PHONY: clean all fclean re