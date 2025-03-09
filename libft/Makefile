CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJ_DIR = obj

SRC = ft_atoi.c ft_strlen.c ft_bzero.c ft_strlcat.c ft_isalpha.c ft_isdigit.c\
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c\
		ft_strncmp.c ft_memcmp.c ft_memchr.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_bzero.c ft_strchr.c ft_strrchr.c ft_strnstr.c\
		ft_strlcpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_strchr2.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\
		ft_printf.c ft_print_p.c ft_print_hex.c ft_print_u.c get_next_line.c\
		ft_realloc.c ft_atoi_base.c count_words.c ft_strrcmp.c

OBJECTS = ${SRC:%.c=$(OBJ_DIR)/%.o}

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME):$(OBJECTS)
	@	ar rc $(NAME) $(OBJECTS)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@	${CC} -c ${CFLAGS}  $< -g  -o $@

clean:
	@	rm -rf $(OBJ_DIR)

fclean: clean
	@	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
