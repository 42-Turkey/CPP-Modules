# Created by Onur Dursun on 10/6/22.

NAME = brain

CXX = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

RM  = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

.o:.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	@$(RM) $(OBJ)

fclean: clean
	 @$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re