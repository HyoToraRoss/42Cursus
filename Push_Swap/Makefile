NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror -g -fsanitize=address

SOURCE  =  srcs/*.c \
		   #sources/sorting/*.c \
		   #sources/utils/*.c \
		   #sources/main.c

$(NAME):
	$(CC) $(FLAGS) $(SOURCE) -Iincludes -o $(NAME)

all: $(NAME)

clean:
	@rm -rf srcs/*.o
	#@rm -rf sources/operations/*.o
	#@rm -rf sources/sorting/*.o
	#@rm -rf sources/utils/*.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

