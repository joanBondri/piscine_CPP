SRC = main.cpp \
	  AAnimal.cpp \
	  Cat.cpp \
	  Dog.cpp \
	  Brain.cpp \

OBJS = $(SRC:.cpp=.o)

NAME = life

CC = c++

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

.c.o :
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	$(CC) -o $(NAME)  $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
