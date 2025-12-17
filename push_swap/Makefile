NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes -Ilibft
LDFLAGS = -Llibft -lft

SRC_DIR = src
OBJ_DIR = obj
LIBFT_DIR = libft

SRC_FILES = $(SRC_DIR)/main.c \
            $(SRC_DIR)/utils.c \
            $(SRC_DIR)/input_utils.c \
            $(SRC_DIR)/operations/push.c \
            $(SRC_DIR)/operations/reverse_rotate.c \
            $(SRC_DIR)/operations/rotate.c \
            $(SRC_DIR)/operations/swap.c \
            $(SRC_DIR)/sort/sort_large.c \
            $(SRC_DIR)/sort/sort_small.c \
            $(SRC_DIR)/sort/sort_utils.c

OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: libft $(NAME)

libft:
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) $(LDFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all libft clean fclean re
