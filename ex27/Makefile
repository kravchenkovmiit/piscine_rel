# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hvalenci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 22:12:52 by hvalenci          #+#    #+#              #
#    Updated: 2019/09/05 22:25:41 by hvalenci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror

FILES_C = main.c

FILES_O = main.o

HEADERS = ./main.h

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(FILES_C) -I$(HEADERS)
	gcc -o $(NAME) $(FILES_O)

clean:
	rm -f $(FILES_O)

fclean: clean
	rm -f $(NAME)
