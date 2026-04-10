NAME = animal

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = \
	Animal.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	Cat.cpp \
	Dog.cpp \
	Brain.cpp \
	main.cpp
OBJS = \
	Animal.o \
	WrongAnimal.o \
	WrongCat.o \
	Cat.o \
	Dog.o \
	Brain.o \
	main.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
