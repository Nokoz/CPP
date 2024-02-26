NAME = weapon

SRC_DIR = .

OBJ_DIR = .objs

SRC =	$(SRC_DIR)/main.cpp \
		$(SRC_DIR)/Weapon.cpp \
		$(SRC_DIR)/HumanA.cpp \
		$(SRC_DIR)/HumanB.cpp

		

OBJ = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC))

CC = c++
HEAD = 
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address
LFLAGS = -std=c++98
RM = /bin/rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(OBJ) $(HEAD) $(CFLAGS) $(LFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		@mkdir -p $(OBJ_DIR)
		@$(CC) $(CFLAGS) $(HEAD) -c $< -o $@
		@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $(<F)"

clean:
		@$(RM) $(OBJ_DIR)
		@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving objects\033[0m"

fclean: clean
		@$(RM) $(NAME)
		@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re: fclean all

.PHONY: all clean fclean re
