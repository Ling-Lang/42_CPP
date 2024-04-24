NAME = scalarConverter
RM = rm -f
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $@ $(CXXFLAGS)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

all: $(NAME)

re: fclean all

.PHONY: all clean fclean re
