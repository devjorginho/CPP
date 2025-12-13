NAME  = zombies
CC	  = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC   = zombieHorde.cpp \
		Zombie.cpp \
		main.cpp 
OBJS  = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re