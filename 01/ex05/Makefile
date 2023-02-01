# Created by Onur Dursun on 10/6/22.

NAME = harl

CXX = c++

OS	= $(uname -a)

ifeq ($(OS), Darwin)
	CXXFLAGS = -Wall -Werror -Werror -std=c++98 -pedantic
else
	CXXFLAGS = -Wall -Werror -Werror
endif

SRC = main.cpp Harl.cpp

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
