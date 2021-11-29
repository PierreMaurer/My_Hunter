##
## EPITECH PROJECT, 2021
## B-CPE-100-STG-1-1-cpoolday10-pierre.maurer
## File description:
## Makefile
##

SRC =	./opening_a_window.c        \
		./sprite.c        \
		./click_mouse_event.c		\
		./src/fire_entities.c

OBJ =    $(SRC:.c=.o)

LIB = -lcsfml-graphics -lcsfml-window -lcsfml-system

NAME =	wind

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
