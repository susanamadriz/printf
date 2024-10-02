# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjuan-ma <sjuan-ma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 19:13:49 by sjuan-ma          #+#    #+#              #
#    Updated: 2024/10/02 12:15:52 by sjuan-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC =   ft_printf.c \
		ft_nbr.c\
		ft_char_str.c\
		ft_nbr.c\
		ft_hexas.c\
		ft_ptr.c
		
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
