##
## EPITECH PROJECT, 2018
## 
## File description:
## 
##

NAME	= program

CC	= g++

RM	= rm -f

SRCS	= ./Box.cpp \
	  ./ConveyorBelt.cpp \
	  ./ConveyorBeltRand.cpp \
	  ./Elf.cpp \
	  ./GiftPaper.cpp \
	  ./LittlePony.cpp \
	  ./Main.cpp \
	  ./Object.cpp \
	  ./PapaXmasConveyorBelt.cpp \
	  ./PapaXmasElf.cpp \
	  ./PapaXmasTable.cpp \
	  ./Table.cpp \
	  ./TableRand.cpp \
	  ./Teddy.cpp \
	  ./Toy.cpp \
	  ./Wrap.cpp

OBJS	= $(SRCS:.cpp=.o)

CPPFLAGS = -I ./pp
CPPFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
