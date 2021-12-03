##
## EPITECH PROJECT, 2021
## B-CPE-100-STG-1-1-cpoolday10-pierre.maurer
## File description:
## Makefile
##

SRC =	./src/main.c        \
		./src/init.c		\
		./src/gameloop.c        \
		./src/end_menu.c        \
		./src/menu.c        \
		./src/init_struct.c        \
		./src/destruct_struct.c        \
		./src/render.c        \
		./src/event_manager.c        \
		./src/init_gameloop_struc.c        \
		./src/shoot_entities.c        \
		./src/time_text.c        \
		./src/update_entities.c        \
		./src/aimer.c

OBJ =    $(SRC:.c=.o)

LIB = -lcsfml-graphics -lcsfml-window -lcsfml-system -I ../include/ -L ./lib/ -lmy -g

NAME =	wind

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(SRC) $(LIB)
	make clean

clean:
	make -C ./lib/my
	rm -f $(OBJ)

fclean: clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re: fclean all
