# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 14:26:07 by martavar          #+#    #+#              #
#    Updated: 2022/10/25 14:26:07 by martavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcomp.c \
			ft_strnstr.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c\
			ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c \
			ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\

CC = gcc

FLAGS = -Wall -Werror -Wextra -I.

OFILES = $(FILES:%=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC) -I./
	ar -rc $(NAME) $(OFILES)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re