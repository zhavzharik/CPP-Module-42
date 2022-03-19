NAME		=	mutantstack

CPP			=	c++
SRCS		=	main.cpp


HEAD		=	MutantStack.hpp


FLAGS		=	-Wall -Wextra -Werror -std=c++98

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):	$(OBJS) $(HEAD) Makefile
			$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

%.o:		%.cpp $(HEAD)
			$(CPP) $(FLAGS) -c $<

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
