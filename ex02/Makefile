NAME = ex02
# SRC = main.cpp
SRC = mymain.cpp
OBJ_DIR = objects
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:%.cpp=%.o))
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

all: $(NAME)

$(NAME): $(OBJ) Array.hpp
	$(CC) $(FLAGS) -o $@ $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
