NAME		=	push_swap
CC			=	cc

SRCS		=	srcs/main.c

LIBFT		=	libft/libft.a

INC			=	includes/

CFLAGS		=	-Wall -Wextra -Werror -I$(INC) -g -fsanitize=address

RM			=	rm -f

OBJS		=	$(SRCS:%.c=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@make -C libft
			@make clean -C libft
			$(CC) $(SRCS) $(LIBFT) $(CFLAGS) -I /usr/local/include -o $(NAME)

clean:
			@echo $(PURPLE) "[🧹Cleaning...🧹]" $(EOC)
			$(RM) $(OBJS)

fclean:		clean
			@echo $(PURPLE) "[🧹FCleaning...🧹]" $(EOC)
			$(RM) $(NAME)
			$(RM) *.out
			make fclean -C libft/

re:			fclean all

git:
	@git add .
	@git commit -m "$m"
	@git push
	@echo "Commit sent to github"
# To call: make git m="my commit"

.PHONY:		all clean fclean re