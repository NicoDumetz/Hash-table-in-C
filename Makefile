##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile compile my radar
##

SRC	=	ressources/hash.c \
		ressources/disp.c \
		ressources/new_hashtable.c \
		ressources/search.c \
		ressources/ht_insert.c

OBJ	=	$(SRC:.c=.o)

CFLAGS += -g -L./ -lhashtable -Llib/my -lmy

NAME 	= 	libhashtable.a

all:	$(NAME)

required:
	make -C lib/my

test: $(NAME) required
	gcc main.c $(CFLAGS)
	./a.out

$(NAME):	$(OBJ) required
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	make clean -C lib/my

fclean:		clean
	rm -f $(NAME)
	make fclean -C lib/my

re:	fclean all
