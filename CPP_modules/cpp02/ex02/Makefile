NAME		=	ex02

SRC			=	$(wildcard *.cpp)

OBJ			=	$(SRC:.cpp=.o)

CXX			=	clang++

CPPFLAGS	=	-Wall -Wextra -Werror

CXXFLAGS	=	-std=c++98

RM			=	rm -f

%.o:		%.cpp
			$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $?

$(NAME):	$(OBJ)
			$(CXX) $(OBJ) -o $(NAME)

all:		$(NAME)

run:		$(NAME)
			./$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
