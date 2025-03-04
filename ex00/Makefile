NAME=ex00

SRC=main.cpp \
	ScalarConverter.cpp

OBJ = $(SRC:.cpp=.o)

CXXFLAGS=-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) 

test: all
	./ex00 0
	./ex00 nan
	./ex00 42.0f
	./ex00 -inf
	./ex00 120
	./ex00 -4.2

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)