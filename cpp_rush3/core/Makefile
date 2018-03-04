##
## EPITECH PROJECT, 2018
## 
## File description:
## 
##

NAME	= program

CC	= g++

RM	= rm -f

SRCS	= ./CPUInfo.cpp \
	  ./MemoryInfo.cpp \
	  ./NetworkInfo.cpp \
	  ./SysInfo.cpp 

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
