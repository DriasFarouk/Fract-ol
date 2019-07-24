NAME = fractol

## Header ##
HEAD = fract.h

SRCS = ark.c mandelbrot.c main.c complexe.c hook.c utils.c julia.c hook_julia.c

OBJS =		$(SRCS:.c=.o)

INCLUDES =	-I libft/ \
		   	-I minilibx_macos/ \
		   	-I includes/

LIBS =		-L libft/ -lft \
			-L minilibx_macos/ -lmlx -framework OpenGL -framework AppKit

FLAGS =		-g -Wall -Wextra -Werror

$(NAME): $(SRCS) $(OBJS)
				@make -C libft/
				@make -C minilibx_macos/
				@gcc -o $(NAME) $(OBJS) $(LIBS)
				@echo "\033[32m $(NAME) has been successfully created \033[0m"
				@#say "$(NAME) has been successfully created"

#$(OBJS): %.o: %.c
%.o: %.c $(HEAD)
	@echo "$< $@ \033[31m compiled \033[0m"
	@gcc $(FLAGS) $(INCLUDES) -c $< -o $@
	@echo "\033[1A \033[2K \033[A"

all: $(NAME)

clean:
	@rm -f	$(OBJS)
	@make -C minilibx_macos/ clean
	@make -C libft/ clean

fclean: clean
	@rm -f	$(NAME)
	@make -C libft/ fclean
	@echo "$(NAME) Are Deleted."

re: fclean all

.PHONY:	 all clean fclean re