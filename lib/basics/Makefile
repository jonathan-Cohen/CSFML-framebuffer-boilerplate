##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC 	=		my_strlen.c			\
			my_error.c

OBJ 	=	$(SRC:.c=.o)

NAME 	= 	libbasics.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp basics.h ./../../include/
	cp $(NAME) ./../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ./../$(NAME)

re: fclean all