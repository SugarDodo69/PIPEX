CC = cc
CFLAGS = -Wall -Wextra -Werror -I libft -I minilibx-linux -g
NAME = push_swap
OBJ_DIR = obj

SRC_MAIN = starting.c

OBJECTS_MAIN = $(SRC_MAIN:%.c=$(OBJ_DIR)/%.o)
OBJECTS = $(OBJECTS_MAIN)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

NO_COLOR = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m

all: $(LIBFT) $(NAME)


$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) --quiet

$(NAME): $(LIBFT) $(SRC_MAIN)
	$(CC) $(CFLAGS) $(SRC_MAIN) $(LIBFT) -o $(NAME)
	@echo "$(GREEN)Object files created!$(NO_COLOR)"

clean:
	@echo "$(YELLOW)Cleaning...$(NO_COLOR)"
	@	$(MAKE) -C $(LIBFT_DIR) clean --quiet

fclean: clean
	@echo "$(RED)Full Cleaning...$(NO_COLOR)"
	@	rm -rf $(OBJ_DIR) $(NAME)
	@	$(MAKE) -C $(LIBFT_DIR) fclean --quiet

re: fclean all

libft: $(LIBFT)

.PHONY: all clean fclean re libft
