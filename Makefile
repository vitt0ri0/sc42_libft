# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emetapod <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 12:12:32 by emetapod          #+#    #+#              #
#    Updated: 2020/02/11 20:38:30 by emetapod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
COMPILED = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(HEADERS) -c $(SRC)
	ar -rc $(NAME) $(COMPILED)
	ranlib $(NAME)

clean:
	/bin/rm -f $(COMPILED)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
