##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile compile my radar
##

LIB_PATH = lib/my

MY_PRINTF_RESSOURCES_PATH = $(LIB_PATH)/my_printf/ressources

MY_PRINTF_FLAGS_PATH = $(LIB_PATH)/my_printf/flags

MY_PRINTF_SRC =	$(MY_PRINTF_RESSOURCES_PATH)/my_convert_base.c \
		$(MY_PRINTF_RESSOURCES_PATH)/my_putstr.c \
		$(MY_PRINTF_RESSOURCES_PATH)/my_intlen.c \
		$(MY_PRINTF_RESSOURCES_PATH)/my_put_float.c \
		$(MY_PRINTF_RESSOURCES_PATH)/my_put_sci_nbr.c \
		$(MY_PRINTF_RESSOURCES_PATH)/point_g.c \
		$(MY_PRINTF_RESSOURCES_PATH)/my_getnbr.c \
		$(MY_PRINTF_RESSOURCES_PATH)/my_put_nbr.c \
		$(MY_PRINTF_RESSOURCES_PATH)/print_a.c \
		$(MY_PRINTF_RESSOURCES_PATH)/error_handling.c \
		$(MY_PRINTF_FLAGS_PATH)/flags.c \
		$(MY_PRINTF_FLAGS_PATH)/flags2.c \
		$(MY_PRINTF_FLAGS_PATH)/flags3.c \
		$(MY_PRINTF_FLAGS_PATH)/flags4.c \
		$(MY_PRINTF_FLAGS_PATH)/check_mod.c \
		$(MY_PRINTF_FLAGS_PATH)/print_float.c \
		$(MY_PRINTF_FLAGS_PATH)/print_int.c \
		$(MY_PRINTF_FLAGS_PATH)/print_g.c \
		$(LIB_PATH)/my_printf/my_printf.c

SRCLIB 	= $(LIB_PATH)/my_compute_power_rec.c \
		$(LIB_PATH)/my_compute_square_root.c \
		$(LIB_PATH)/my_find_prime_sup.c \
		$(LIB_PATH)/my_getnbr.c \
		$(LIB_PATH)/my_isneg.c \
		$(LIB_PATH)/my_is_prime.c \
		$(LIB_PATH)/my_putchar.c \
		$(LIB_PATH)/my_put_nbr.c \
		$(LIB_PATH)/my_putstr.c \
		$(LIB_PATH)/my_revstr.c \
		$(LIB_PATH)/my_showmem.c \
		$(LIB_PATH)/my_showstr.c \
		$(LIB_PATH)/my_show_word_array.c \
		$(LIB_PATH)/my_sort_int_array.c \
		$(LIB_PATH)/my_strcapitalize.c \
		$(LIB_PATH)/my_strcat.c \
		$(LIB_PATH)/my_strcmp.c \
		$(LIB_PATH)/my_strcpy.c \
		$(LIB_PATH)/my_str_isalpha.c \
		$(LIB_PATH)/my_str_islower.c \
		$(LIB_PATH)/my_str_isnum.c \
		$(LIB_PATH)/my_str_isprintable.c \
		$(LIB_PATH)/my_str_isupper.c \
		$(LIB_PATH)/my_strlen.c \
		$(LIB_PATH)/my_strlowcase.c \
		$(LIB_PATH)/my_strncat.c \
		$(LIB_PATH)/my_strncmp.c \
		$(LIB_PATH)/my_strncpy.c \
		$(LIB_PATH)/my_strstr.c \
		$(LIB_PATH)/my_str_to_word_array.c \
		$(LIB_PATH)/my_strupcase.c \
		$(LIB_PATH)/my_swap.c \
		$(LIB_PATH)/my_strdup.c \
		$(MY_PRINTF_SRC)

SRC	=	ressources/hash.c \
		ressources/disp.c \
		ressources/new_hashtable.c \
		ressources/search.c \
		ressources/ht_insert.c \
		ressources/ht_delete.c \
		$(SRCLIB)

OBJ	=	$(SRC:.c=.o)

CFLAGS += -L./ -lhashtable

NAME 	= 	libhashtable.a

all:	$(NAME)

test: $(NAME)
	gcc main.c $(CFLAGS)
	./a.out

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:	fclean all
