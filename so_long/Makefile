NAME		=	so_long

INCLUDE_DIR	=	includes

HEADER		=	$(INCLUDE_DIR)/so_long.h

SRC_DIR		=	src/so_long

SRCS		=	main.c					\
				loads.c					\
				builds.c				\
				move.c					\
				service_func.c			\
				valide_map.c			\
				valide_func.c			\
				parse_map.c 			\
				get_next_line_utils.c	\
				lib_utils.c 			\
				get_next_line.c 

OBJS_DIR	=	obj/

MLX_FLAGS	=	-framework OpenGL -framework AppKit -lmlx

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

OBJS		=	$(addprefix $(OBJS_DIR), $(SRCS:c=o))



all:				$(NAME)

$(OBJS_DIR)%.o:		%.c $(HEADER) | $(OBJS_DIR)
					$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE_DIR)

$(OBJS_DIR):
					mkdir $@


$(NAME):			$(OBJS) $(HEADER)
					$(CC) $(OBJS) -I $(INCLUDE_DIR) $(MLX_FLAGS) -o $(NAME)

clean:
					@$(RM) -r $(OBJS_DIR)

fclean: 			clean
					@$(RM) $(NAME)

re: 				clean all

.PHONY: 			all clean fclean re