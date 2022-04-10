##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

## ========================================================================== ##
PATH_PROCESS		=	source/process/
PROCESS			=	boilerplate_process.c			\
				main.c

## ========================================================================== ##
PATH_WINDOW		=	source/window/
WINDOW			=	boilerplate_window.c

## ========================================================================== ##
PATH_FRAMEBUFFER	=	source/framebuffer/
FRAMBUFFER		=	boilerplate_framebuffer.c

## ========================================================================== ##
PATH_SHAPES		=	source/framebuffer/shapes/
SHAPES			=	shape_square.c

## ========================================================================== ##
PATH_BUFFER		=	source/framebuffer/buffer/
BUFFER			=	framebuffer_buffer.c			\
				buffer_restore.c			\
				buffer_pixel.c

## ========================================================================== ##
PATH_GROUP		=	source/framebuffer/group/
GROUP			=	framebuffer_group.c

SRC	=	$(addprefix $(PATH_PROCESS), $(PROCESS))		\
		$(addprefix $(PATH_WINDOW), $(WINDOW))			\
		$(addprefix $(PATH_FRAMEBUFFER), $(FRAMBUFFER))		\
		$(addprefix $(PATH_BUFFER), $(BUFFER))			\
		$(addprefix $(PATH_SHAPES), $(SHAPES))			\
		$(addprefix $(PATH_GROUP), $(GROUP))

NAME	=	framebuffer-boilerplate

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-L ./lib/basics/ -lbasics -I ./include/ -Wall -Werror -lm

LDFLAGS	= 	-lcsfml-graphics	\
		-lcsfml-system		\
		-lcsfml-window		\
		-lcsfml-audio		\
		-lm

$(NAME):	$(OBJ)
	@make	-sC	lib/basics
	@gcc -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)
	@echo -e "\033[01;38;5;10m================Compiling: Done\033[0;0m"

all:	$(NAME)

clean:
	@rm -f $(OBJ)
	@$(MAKE)	-s	-C	lib/basics fclean

fclean:	clean
	@rm -f $(NAME)
	@rm -f vgcore*

re: fclean all

debug:
	@$(MAKE)	-s	-C	lib/basics
	@gcc -o $(NAME) $(SRC) $(LDFLAGS) $(CFLAGS) $(DEBUG) -g
	@echo -e "\033[01;38;5;45m============Valgrind compilation: Done\033[0;0m"

.PHONY:	all clean flcean re debug