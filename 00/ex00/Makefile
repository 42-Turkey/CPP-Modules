NAME = megaphone

CXX = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

RM  = rm -f

all: $(NAME)
	@echo "Compilation done"
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
