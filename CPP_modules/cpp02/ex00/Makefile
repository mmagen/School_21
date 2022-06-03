SRCS	=	$(wildcard *.cpp)

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	fixed

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS)  -o $@ $^

%.o:		%.cpp Fixed.hpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re