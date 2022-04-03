SRC = main.cpp \
	  Convert.cpp \

OBJS = $(SRC:.cpp=.o)

NAME = conv

CC = c++

CFLAGS = -Wall -Wextra -Werror --std=c++98

RM = rm -rf

.cpp.o :
	$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME)  $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
