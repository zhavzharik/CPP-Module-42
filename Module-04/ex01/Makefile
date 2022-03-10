NAME		=	animals

CPP			=	c++
SRCS		=	main.cpp		\
				Animal.cpp		\
				Dog.cpp			\
				Cat.cpp			\
				Brain.cpp


HEAD		=	Animal.hpp		\
				Dog.hpp			\
				Cat.hpp			\
				Brain.hpp


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
