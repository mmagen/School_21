SRCS	=	$(wildcard *.cpp)

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	easyfind

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS)  -o $@ $^

%.o:		%.cpp easyfind.hpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re