NAME 		=	push_swap

HEADER 		=	push_swap.h

LIBFTDIR 	=	libft

LIBFT 		=	$(LIBFTDIR)/libft.a


INCLUDES 	=	-I include -I $(LIBFTDIR)

SRCS 		=	main.c						\
				validate/valide_int.c 		\
				validate/valide_inp.c		\
				sorting/qsorted.c		\
				sorting/sorted.c			\
				sorting/small_alg.c			\
				sorting/speed_func.c		\
				sorting/small_comands.c			\
				sorting/sort_func_two.c		\
				sorting/sort_func_tree.c	\
				service_func/init_list.c	\
				push_swap_func/func2.c		\
				push_swap_func/func.c


OBJS 		=	$(SRCS:c=o)

RM 			=	rm -f

CC 			=	gcc

CFLAGS 		=	-Wall -Wextra -Werror $(INCLUDES)

LFLAGS 		=	-lft -L $(LIBFTDIR)

%.o:		%.c 
			${CC} ${CFLAGS} -c -o $@ $<

all: 		$(NAME)

$(LIBFT):
			make bonus -C $(LIBFTDIR)



$(NAME): 	$(OBJS)  $(LIBFT) 
			$(CC) $(OBJS) -o $(NAME) $(LFLAGS)

clean:

			make clean -C $(LIBFTDIR)
			$(RM) $(OBJS)

fclean:		clean

			make fclean -C $(LIBFTDIR)
			$(RM) $(NAME)

re:			fclean all