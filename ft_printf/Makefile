NAME     = libftprintf.a
CC       = cc
CFLAGS   = -Wall -Werror -Wextra
SRC      = ft_hex_size.c ft_pointer_size.c ft_putchar_size.c ft_putnbr_size.c ft_putstr_size.c ft_putunsigned_size.c ft_printf.c
OBJ      = $(SRC:.c=.o)
HEADERS  = ft_printf.h

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
