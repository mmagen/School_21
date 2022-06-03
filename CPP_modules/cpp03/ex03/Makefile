SRCS	=	$(wildcard *.cpp)

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	clap_trap

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -Wshadow -Wno-shadow

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS)  -o $@ $^

%.o:		%.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re