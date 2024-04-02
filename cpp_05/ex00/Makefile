NAME = bureaucrat
RM = rm -f
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = 	main.cpp \
		Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@ $(CFLAGS)

%.o: %.cpp
	$(CC) -c $< -o $@

test: re
	./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

all: $(NAME)

re: fclean all

.PHONY: all clean fclean re
