# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdrias <fdrias@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 17:43:54 by fdrias            #+#    #+#              #
#    Updated: 2018/10/06 18:51:56 by fdrias           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memmove.c\
ft_memset.c ft_memcmp.c ft_strcat.c ft_strcmp.c ft_strchr.c ft_strcpy.c\
ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strnew.c\
ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_isalnum.c ft_strdel.c\
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_strclr.c\
ft_isupper.c ft_tolower.c ft_toupper.c ft_memalloc.c ft_memdel.c ft_striter.c\
ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c\
ft_strjoin.c  ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c\
ft_putnbr.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c\
ft_lstmap.c ft_strlowcase.c ft_strupcase.c ft_sqrt.c ft_abs.c get_next_line.c\
ft_lowstr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo " \033[32m $(NAME) has been successfully created\033[0m"
	@#say " the library has been successfully created"
	
%.o : %.c
	@echo "$< $@ \033[31m compiled \033[0m"
	@$(CC) -g -o $@ -c $< $(FLAGS)
	@echo "\033[1A \033[2K \033[A"

clean:
		@/bin/rm -f $(OBJS)
		@/bin/rm -rf a.out
		

fclean: clean
		@/bin/rm -f $(NAME)
		@echo "$(NAME) Are Deleted."

re: fclean all
