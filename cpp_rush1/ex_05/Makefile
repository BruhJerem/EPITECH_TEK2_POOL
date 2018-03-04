NAME	= program

CC	= gcc

RM	= rm -f

SRCS	= ./ex_05.c	\
		float.c	\
		new.c	\
		char.c	\
		int.c	\
		array.c


OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
