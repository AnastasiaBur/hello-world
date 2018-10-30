# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsanford <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/30 20:03:05 by jsanford          #+#    #+#              #
#    Updated: 2018/10/30 20:59:26 by jsanford         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
LIB = libft.a
SOURCE = srcs/*.c
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCE) -Iincludes
	ar rc $(LIB) *.o
	ranlib $(LIB)
	gcc doop.c -o $(NAME) -L. -lft -Iincludes $(FLAGS)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)
re: fclean all
