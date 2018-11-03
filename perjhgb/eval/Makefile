NAME = eval_expr
SRC = src/*.c
HEADERS = headers/
FLAGS = -Wall -Werror -Wextra 

all : $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) $(FLAGS) -I./$(HEADERS)

clean:

fclean: clean
	rm $(NAME)

re: all
