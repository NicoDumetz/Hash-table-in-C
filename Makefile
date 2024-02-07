##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile compile my radar
##

SRC	=	ressources/hash.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS += -g

NAME 	= 	libhashtable.a

LDFLAGS = -lm

all:	$(NAME)

test: $(NAME)
	gcc main.c -L./ -lmy
	./a.out

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:	fclean all
