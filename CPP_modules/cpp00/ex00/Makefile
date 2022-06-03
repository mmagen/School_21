SRCS	=	$(wildcard *.cpp)

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	megaphone

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS)  -o $@ $^

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all make_libft clean fclean re