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
SRC = ft_isalpha ft_isdigit\
ft_isalnum ft_isascii\
ft_isprint ft_strlen\
ft_memset ft_bzero\
ft_memcpy ft_memmove\
ft_strlcpy ft_strlcat\
ft_toupper ft_tolower\
ft_strchr ft_strrchr\
ft_strncmp ft_memchr\
ft_memcmp ft_strnstr\
ft_atoi\
ft_calloc ft_strdup\
ft_substr ft_strjoin ft_strtrim #ft_split ft_strmapi ft_striteri\
#ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_split\

#BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back\
ft_lstdelone ft_lstclear ft_lstiter ft_lstmap\

CC =gcc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra -I.

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)
bonus:	$(SRC:=.o)	$(BONUS:=.o)
		ar rc $(NAME) $(SRC:=.o)	$(BONUS:=.o)