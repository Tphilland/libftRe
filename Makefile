# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tphillan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/12 12:50:26 by tphillan          #+#    #+#              #
#    Updated: 2019/07/12 13:01:06 by tphillan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_strlen.c ft_memset.c ft_bzero.c

OBJECTS=ft_strlen.o ft_memset.o ft_bzero.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
