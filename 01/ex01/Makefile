SRC = main.cpp \
	  zombieHorde.cpp \
	  Zombie.cpp \

OBJS = $(SRC:.c=.o)

NAME = omg_they_are_a_lot

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
