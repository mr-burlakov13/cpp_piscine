NAME	=	serialize

CC		=	clang++ main.cpp deserialize.cpp serialize.cpp getRandomString.cpp -Wall -Wextra -Werror 

all		:	$(NAME)

$(NAME)	:	
			$(CC) -o ${NAME} 

clean:

fclean:		clean
			rm -f ${NAME}
re:			fclean all

.PHONY:		all clean fclean re