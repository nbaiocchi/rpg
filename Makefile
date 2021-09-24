##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## t
##

SRC		=	./src/my_rpg.c							\
			$(wildcard ./src/create/*.c)			\
			$(wildcard ./src/window/*.c)			\
			$(wildcard ./src/menu/*.c)				\
			$(wildcard ./src/map/*.c)				\
			$(wildcard ./src/pers/*.c)				\
			$(wildcard ./src/tools/*.c)				\
			$(wildcard ./src/battle/*.c)			\

OBJ		=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-W -Wall -Wextra -g

all:	$(NAME)
		@echo -e "\033[0;34m<$(NAME) has been created>\033[00m"

$(NAME):	$(OBJ)
	gcc $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -o $(NAME)
	@echo -e "\033[0;34m<deleted all .o>\033[00m"
	rm -f $(OBJ)

clean:
	@echo -e "\033[0;34m<Deleting useless files>\033[00m"
	rm -f $(OBJ)

fclean:    clean
	rm -f $(NAME)

re:	fclean all