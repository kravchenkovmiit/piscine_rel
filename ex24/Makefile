# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hvalenci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 21:59:10 by hvalenci          #+#    #+#              #
#    Updated: 2019/09/05 22:03:43 by hvalenci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

CFLAGS = -Wall -Wextra -Werror -c

SRC = ./srcs/

FILES_C = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c \
		  $(SRC)ft_strlen.c $(SRC)ft_swap.c

SRC_O = ./

FILES_O = $(SRC_O)ft_putchar.o $(SRC_O)ft_putstr.o $(SRC_O)ft_strcmp.o \
		  $(SRC_O)ft_strlen.o $(SRC_O)ft_swap.o

HEADERS = ./includes/

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(FILES_C) -I$(HEADERS)
	ar rc $(NAME) $(FILES_O)
	ranlib $(NAME)

clean:
	rm -f $(FILES_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
