NAME = polymorphism
RM = rm -f
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = 	main.cpp \
		Cat.cpp  \
		Dog.cpp  \
		Animal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@ $(CFLAGS)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

all: $(NAME)

re: fclean all

.PHONY: all clean fclean re
