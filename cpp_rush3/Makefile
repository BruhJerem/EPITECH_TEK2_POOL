##
## EPITECH PROJECT, 2018
## 
## File description:
## 
##

NAME	= program

CC	= g++ -lncurses

RM	= rm -f

SRCS	= ./text/CPUInfo.cpp \
	  ./text/MemoryInfo.cpp \
	  ./text/NetworkInfo.cpp \
	  ./text/SysInfo.cpp \
        ./text/MonitorModule.cpp \
        ./text/MemoryInfoModule.cpp \
        ./text/SysInfoModule.cpp \
        ./text/CpuModule.cpp

OBJS	= $(SRCS:.cpp=.o)

CPPFLAGS = -I./
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
