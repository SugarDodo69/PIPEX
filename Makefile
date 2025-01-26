CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libpipex.a
OBJ_DIR = obj

SRC_MAIN = ft_placeholder.c

SRC_SUBDIR = ft_atoi.c ft_strlen.c ft_bzero.c ft_strlcat.c ft_isalpha.c\
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_tolower.c ft_toupper.c\
		ft_strncmp.c ft_memcmp.c ft_memchr.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_bzero.c ft_strchr.c ft_strrchr.c ft_strnstr.c\
		ft_strlcpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_printf.c ft_print_p.c ft_print_hex.c ft_print_u.c

OBJECTS_MAIN = $(SRC_MAIN:%.c=$(OBJ_DIR)/%.o)
OBJECTS_SUBDIR = ${SRC_SUBDIR:%.c=$(OBJ_DIR)/%.o}

OBJECTS = $(OBJECTS_MAIN) $(OBJECTS_SUBDIR)

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME) $(OBJ_DIR) $(LIBFT)
	@echo "Object files created!"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME):$(OBJECTS)
	@	ar rc $(NAME) $(OBJECTS)

$(OBJ_DIR)/%.o: $(LIBFT_DIR)/%.c | $(OBJ_DIR)
	@	${CC} -c ${CFLAGS} -I. $< -o $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@	${CC} -c ${CFLAGS} -I. $< -o $@

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	@echo "Cleaning..."
	@	rm -rf $(OBJECTS) $(OBJ_DIR)
	@	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "FCleaning..."
	@	rm -rf $(OBJ_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
