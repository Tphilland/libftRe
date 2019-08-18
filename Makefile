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

SRCS = ft_memcmp.c ft_putchar.c ft_strlen.c ft_bzero.c ft_strcat.c ft_strncpy.c \
	ft_memcpy.c ft_memmove.c ft_strcpy.c ft_strnlen.c ft_memset.c ft_strdup.c \
	ft_tolower.c ft_toupper.c ft_isalnum.c ft_isdigit.c ft_islower.c ft_isupper.c \
	ft_isalpha.c ft_isascii.c ft_isprint.c ft_atoi.c ft_strchr.c ft_strclr.c ft_putendl.c \
	ft_putendl_fd.c \

OBJECTS = ft_memcmp.o	ft_putchar.o ft_strlen.o ft_bzero.o ft_memcpy.o	ft_strcat.o	\
		ft_strncpy.o  ft_memmove.o ft_strcpy.o	ft_strnlen.o ft_memset.o ft_strdup.o \
		ft_tolower.o ft_toupper.o ft_isalnum.o ft_isdigit.o ft_islower.o ft_isupper.o \
		ft_isalpha.o ft_isascii.o ft_isprint.o ft_atoi.o ft_strchr.o ft_strclr.o ft_putendl.o \
		ft_putendl_fd.o \

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
