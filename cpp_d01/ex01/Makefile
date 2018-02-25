##
## EPITECH PROJECT, 2018
## ex01
## File description:
## 01
##

SRC	=	main.c	\
		menger.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./ -pedantic -Wall -Wextra

LIB	= 	-L./lib/my

NAME	=	menger

MAKE	=	make --no-print-directory -C

DEBUG	+=	-g

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) $(CFLAGS) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean:		clean
		rm -rf $(OBJ)

re: 		fclean all

.PHONY: 	all clean fclean re
