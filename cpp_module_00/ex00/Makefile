NAME	=	megaphone

SRCS	:=	main.c

CC		=	clang++ megaphone.cpp -Wall -Wextra -Werror

all		:	$(NAME)

$(NAME)	:	
			$(CC) -o ${NAME}

clean:

fclean:		clean
			rm -f ${NAME}
re:			fclean all

.PHONY:		all clean fclean re