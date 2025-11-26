# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sllabres <sllabres@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/26 13:28:58 by sllabres          #+#    #+#              #
#    Updated: 2025/10/26 13:29:32 by sllabres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= rush-02
CC		= cc
CFLAGS		= -Wall -Wextra -Werror
SRC		= main.c parser.c convert_number.c print.c functions.c functions2.c
OBJ		= $(SRC:.c=.o)
HEADERS		= rush02.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
