NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRC     = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
          ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
          ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
          ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
          ft_strrchr.c ft_tolower.c ft_toupper.c ft_strjoin.c ft_split.c \
          ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
          ft_putnbr_fd.c ft_strtrim.c ft_substr.c ft_strmapi.c ft_striteri.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
            ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \

PRINTF_SRC = ft_printf.c ft_hex_size.c ft_pointer_size.c \
             ft_putchar_size.c ft_putnbr_size.c ft_putstr_size.c \
             ft_putunsigned_size.c

GNL_SRC = get_next_line.c

GNL_BONUS_SRC = get_next_line_bonus.c

OBJ     = $(SRC:.c=.o) $(PRINTF_SRC:.c=.o) $(GNL_SRC:.c=.o) ${BONUS_OBJ}
BONUS_OBJ = $(BONUS_SRC:.c=.o) $(GNL_BONUS_SRC:.c=.o)
HEADERS = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re bonus
