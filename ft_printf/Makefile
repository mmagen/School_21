NAME = libftprintf.a

SRCS =  ft_itoa.c			ft_printf.c					ft_strlen.c\
		print_int.c		print_min.c					print_plus.c\
		print_char.c   print_hex.c    print_point.c  print_str.c  print_unsigned.c  hex_mod.c\

OBJS = $(addprefix obj/,$(SRCS:.c=.o))

CC = gcc

RM = rm -fr

HEADER = ft_printf.h

CFLAGS = -Wall -Wextra -Werror -I $(HEADER)

obj/%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

all: obj/ $(NAME)

obj/:
	mkdir obj

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS) 

clean:
		$(RM) $(OBJS) obj/

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
