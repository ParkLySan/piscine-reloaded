# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: litoulza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 14:47:06 by litoulza          #+#    #+#              #
#    Updated: 2017/11/10 14:47:19 by litoulza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMP = gcc
FLAGS = -Wall -Wextra -Werror -I./includes
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
NAME = libft.a
SRC_DIR = srcs/
WDIR = $(addprefix $(SRC_DIR), $(SRCS))
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS):
	$(COMP) -c $(FLAGS) $(WDIR)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
