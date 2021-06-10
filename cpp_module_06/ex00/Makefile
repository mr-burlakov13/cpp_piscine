NAME	=	convert

CC		=	clang++ main.cpp Func.cpp f_Char.cpp f_Digit.cpp f_Exception.cpp -Wall -Wextra -Werror 

all		:	$(NAME)

$(NAME)	:	
			$(CC) -o ${NAME} 

clean:

fclean:		clean
			rm -f ${NAME}
re:			fclean all

.PHONY:		all clean fclean re