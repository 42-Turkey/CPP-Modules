NAME = phonebook

CXX = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp PhoneBook.cpp main.cpp utils.cpp

OBJ = $(SRC:.cpp=.o)

SRC_DIR = ./

SRC_FILES = $(addprefix $(SRC_DIR), $(SRC))
OBJ_FILES = $(addprefix $(OBJ_DIR), $(OBJ))

OBJ_DIR = obj/

RM  = rm -rf

all: $(NAME)
	@echo "\033[32mCompilation done\033[0;39m"

$(NAME): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(NAME)

debug: $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -fsanitize=address -g $(OBJ_FILES) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@if [ -d $(OBJ_DIR) ]; then cd $(OBJ_DIR); $(RM) $(OBJ); echo "\033[31mObject files deleted\033[0;39m" ; \
	else echo "\033[31mObject directory not found\033[0;39m" ; fi

fclean: clean
	@if [[ -f $(NAME) && -d $(OBJ_DIR) ]]; then $(RM) $(NAME) $(OBJ_DIR); echo "\033[31mObject directory and executable deleted\033[0;39m" ; \
 	else echo "\033[31mObject directory and executable not found\033[0;39m" ; fi

re: fclean all

.PHONY: all debug clean fclean re
