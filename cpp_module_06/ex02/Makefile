NAME	=	identify

CC		=	clang++ main.cpp identify_from_pointer.cpp identify_from_reference.cpp Base.cpp Base_generate.cpp -Wall -Wextra -Werror 

all		:	$(NAME)

$(NAME)	:	
			$(CC) -o ${NAME} 

clean:

fclean:		clean
			rm -f ${NAME}
re:			fclean all

.PHONY:		all clean fclean re