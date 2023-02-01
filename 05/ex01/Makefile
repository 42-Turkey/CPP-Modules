NAME = form

RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K


SRC_DIR		=	Source/
OBJ_DIR		=	Library/

SRC_FILES = Bureaucrat.cpp main.cpp Form.cpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

RM = rm -rf

CXX = c++

CXXFLAGS = -Wall -Werror -Werror -std=c++98 -pedantic

all: $(NAME)
	@echo "$(RED)Compiling is done.$(RESET)"

$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling [$(NAME)] file...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(YELLOW)Finished [$(NAME)]$(RESET)"

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@[ !$(OBJ_DIR) ]; mkdir -p $(OBJ_DIR);
	@echo "$(YELLOW)Compiling [$@]...$(RESET)\n"
	@$(CXX) $(CXXFLAGS) -I Include/ -o $@ -c $<

clean:
	@$(RM) $(OBJ_FILES)

fclean: clean
	@if [ -d "$(OBJ_DIR)" ]; then $(RM) $(OBJ_DIR); fi
	@if [ -f "$(NAME)" ]; then $(RM) $(NAME); fi

re: fclean all

.PHONY: all clean fclean re